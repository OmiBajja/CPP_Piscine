/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:32:08 by obajja            #+#    #+#             */
/*   Updated: 2025/11/28 10:21:47 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string name_to_set):AForm(name_to_set, 72, 45), _target(name_to_set)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src):AForm(src)
{

}

std::string RobotomyRequestForm::getTarget( void ) const
{
    return (this->_target);
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
    if (this != &src)
        AForm::operator=(src);
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->AForm::getSignature() && executor.getGrade() < this->getGradeToExecute())
    {
        std::cout << "TZZTZTZTTZTZZZZZTZTZTTZTZTZZZTZTZTZTZZZZZTZZTTZZZZTZZZ" << std::endl;
        srand(time(NULL));
        if (rand() % 2 == 0)
            std::cout << executor.getName() << " got robotomized!"<< std::endl;
        else
            std::cout << executor.getName() << " Your skull is too hard! Can't robotomize you!"<< std::endl;
    }
    else
    {
        std::cout << executor.getName() << " couldn't execute " << this->getName() << " because Grade is too low" << std::endl;
        throw GradeTooLowException();
    }
}
