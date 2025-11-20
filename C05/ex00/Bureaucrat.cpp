/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:16:30 by obajja            #+#    #+#             */
/*   Updated: 2025/11/20 12:02:46 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string   _name, int _grade):bureaucrat_name(_name), bureaucrat_grade(_grade)
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string   _name, int _grade):bureaucrat_name(_name), bureaucrat_grade(_grade)
{
}

Bureaucrat::GradeTooHighException::~GradeTooHighException()
{
}

Bureaucrat::GradeTooLowException::~GradeTooLowException()
{
}

Bureaucrat::Bureaucrat(const std::string name_to_set, int grade_to_set):name(name_to_set)
{
    if (grade_to_set < 1)
        throw GradeTooHighException(this->getName(), this->getGrade());
    else if (grade_to_set > 150)
        throw GradeTooLowException(this->getName(), this->getGrade());
    else
        this->grade = grade_to_set;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src):name(src.name)
{
    if (src.grade < 1)
        throw GradeTooHighException(src.getName(), src.getGrade());
    else if (src.grade > 150)
        throw GradeTooLowException(src.getName(), src.getGrade());
    else
        this->grade = src.grade;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & src )
{
    if (src.grade < 1)
        throw GradeTooHighException(src.getName(), src.getGrade());
    else if (src.grade > 150)
        throw GradeTooLowException(src.getName(), src.getGrade());
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

const std::string Bureaucrat::GradeTooHighException::getName(void) const
{
    return(this->bureaucrat_name);
}

int Bureaucrat::GradeTooHighException::getGrade(void) const
{
    return (this->bureaucrat_grade);
}

const std::string Bureaucrat::GradeTooLowException::getName(void) const
{
    return(this->bureaucrat_name);
}

int Bureaucrat::GradeTooLowException::getGrade(void) const
{
    return (this->bureaucrat_grade);
}

std::ostream & operator<<( std::ostream& os, Bureaucrat const & src)
{
    os << src.getName() << ", bureaucrat grade " << src.getGrade();
    return (os);
}