/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:58:35 by obajja            #+#    #+#             */
/*   Updated: 2025/12/09 13:12:43 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::~Intern(void)
{
}

Intern::Intern(void)
{
}

Intern::Intern(Intern const & src)
{
    (void)src;
}

Intern & Intern::operator=( Intern const & src )
{
    (void)src;
    return (*this);
}

const char* Intern::FormNotFound::what() const throw()
{
    return("Couldn't find the Form you asked for");
}

AForm *Intern::NewRobotomy(const std::string & target)
{
    return (new RobotomyRequestForm(target));
}

AForm *Intern::NewPresidential(const std::string & target)
{
    return (new PresidentialPardonForm(target));
}
AForm *Intern::NewShrubbery(const std::string & target)
{
    return (new ShrubberyCreationForm(target));    
}

AForm* Intern::makeForm(std::string FormName, std::string target)
{
    t_factory list[3] = 
    {
        {"robotomy request", Intern::NewRobotomy},
        {"shrubbery creation", Intern::NewShrubbery},
        {"presidential pardon", Intern::NewPresidential}
    };

    for (int i = 0; i < 3; i++)
    {
        if (list[i].name == FormName)
        {
            AForm *result = list[i].create_form(target);
            std::cout << "Intern creates " << FormName << std::endl;
            return (result);
        }
    }
    throw Intern::FormNotFound();
}
