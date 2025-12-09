/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 23:24:18 by obajja            #+#    #+#             */
/*   Updated: 2025/11/25 15:23:47 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::~Form()
{
}

Form::Form(const std::string name_to_set, int signing_grade, int executing_grade):_name(name_to_set), _grade_to_sign(signing_grade), _grade_to_execute(executing_grade), _is_signed(false)
{
    if (signing_grade < 1 || executing_grade < 1)
        throw GradeTooHighException();
    else if (signing_grade > 150 || executing_grade > 150)
        throw GradeTooLowException();
}

Form::Form(Form const & src):_name(src._name), _grade_to_sign(src._grade_to_sign), _grade_to_execute(src._grade_to_execute), _is_signed(src._is_signed)
{
    if (_grade_to_sign < 1 || _grade_to_execute < 1)
        throw GradeTooHighException();
    else if (_grade_to_sign > 150 || _grade_to_execute > 150)
        throw GradeTooLowException();
}

Form & Form::operator=(Form const & src)
{
    if (this != &src)
        this->_is_signed = src._is_signed;
    return (*this);
}

const std::string Form::getName(void) const
{
    return(this->_name);
}

int Form::getGradeToSign(void) const
{
    return(this->_grade_to_sign);
}

int Form::getGradeToExecute(void) const
{
    return(this->_grade_to_execute);
}

void Form::beSigned(Bureaucrat & src)
{
    if (src.getGrade() > this->_grade_to_sign)
    {
        std::cout << src.getName() << " couldn't sign " << this->getName() << " because Grade is too low" << std::endl;
        throw GradeTooLowException();
    }
}

void Form::setSignature(void)
{
    this->_is_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Form's grade is too High");}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Form's grade is too Low");
}

std::ostream & operator<<( std::ostream& os, Form const & src)
{
    os << src.getName() << ", Form's grade signing threshold " << src.getGradeToSign() << ", and grade executing treshold " << src.getGradeToExecute() << std::endl;
    return (os);
}