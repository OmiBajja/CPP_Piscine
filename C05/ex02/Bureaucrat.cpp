/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:16:30 by obajja            #+#    #+#             */
/*   Updated: 2025/11/25 16:38:05 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(const std::string name_to_set, int grade_to_set):name(name_to_set)
{
    if (grade_to_set < 1)
        throw GradeTooHighException();
    else if (grade_to_set > 150)
        throw GradeTooLowException();
    else
        this->grade = grade_to_set;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src):name(src.name)
{
    if (src.grade < 1)
        throw GradeTooHighException();
    else if (src.grade > 150)
        throw GradeTooLowException();
    else
        this->grade = src.grade;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & src )
{
    if (src.grade < 1)
        throw GradeTooHighException();
    else if (src.grade > 150)
        throw GradeTooLowException();
    else
        this->grade = src.grade;
    return (*this);
}

const std::string Bureaucrat::getName(void) const
{
    return(this->name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too High");}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too Low");
}
Bureaucrat & Bureaucrat::operator++( void )
{
    if (this->getGrade() < 2)
        throw GradeTooHighException();
    else
        this->grade--;
    return (*this);
}

Bureaucrat & Bureaucrat::operator--( void )
{
    if (this->getGrade() > 149)
        throw GradeTooLowException();
    else
        this->grade++;
    return (*this);
}

void Bureaucrat::executeForm(AForm const & form) const
{
    form.execute(*this);
    std::cout << this->getName() << " executed " << form.getName() << std::endl;
}

void  Bureaucrat::signForm( AForm & src )
{
    src.beSigned(*this);
    src.setSignature();
    std::cout << this->getName() << " signed " << src.getName() << std::endl;
}


std::ostream & operator<<( std::ostream& os, Bureaucrat const & src)
{
    os << src.getName() << ", bureaucrat grade " << src.getGrade();
    return (os);
}