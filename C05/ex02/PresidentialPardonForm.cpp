/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:32:08 by obajja            #+#    #+#             */
/*   Updated: 2025/11/28 10:21:42 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string name_to_set):AForm(name_to_set, 25, 5), _target(name_to_set)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src):AForm(src)
{

}

std::string PresidentialPardonForm::getTarget( void ) const
{
    return (this->_target);
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
    if (this != &src)
        AForm::operator=(src);
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->AForm::getSignature() && executor.getGrade() < this->getGradeToExecute())
    {
        std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    else
    {
        std::cout << executor.getName() << " couldn't execute " << this->getName() << " because Grade is too low" << std::endl;
        throw GradeTooLowException();
    }
}
