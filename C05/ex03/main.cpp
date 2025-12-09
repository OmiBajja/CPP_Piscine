/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:41:35 by obajja            #+#    #+#             */
/*   Updated: 2025/12/09 13:04:49 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    AForm* rrf;
    try{
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        Bureaucrat Joe("Joe", 14);
        std::cout << Joe << std::endl;
        std::cout << *rrf << std::endl;
        Joe.signForm(*rrf);
        Joe.executeForm(*rrf);
        delete rrf;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    Intern notRandomIntern;
    AForm* ppr;
    try{
        ppr = notRandomIntern.makeForm("shrubbery creation", "tri");
        Bureaucrat Gustave("Gustave", 3);
        std::cout << Gustave << std::endl;
        std::cout << *ppr << std::endl;
        Gustave.signForm(*ppr);
        Gustave.executeForm(*ppr);
        delete ppr;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    
    Intern leastRandomIntern;
    AForm* bs;
    try{
        bs = leastRandomIntern.makeForm("rat request", "Cheese");
        Bureaucrat Massimiliano("Massimiliano", 11);
        std::cout << Massimiliano << std::endl;
        std::cout << *bs << std::endl;
        Massimiliano.signForm(*bs);
        Massimiliano.executeForm(*bs);
        delete bs;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}