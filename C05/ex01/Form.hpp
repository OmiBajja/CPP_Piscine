/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 23:24:22 by obajja            #+#    #+#             */
/*   Updated: 2025/11/25 15:24:07 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

    public:
        Form(Form const & src);
        Form(const std::string name_to_set, int signing_grade, int executing_grade);
        ~Form();
        Form &  operator=(Form const & src);
        const std::string getName() const;
        void        setSignature(void);
        int         getGradeToSign() const;
        int         getGradeToExecute() const;
        void              beSigned(Bureaucrat & src);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
    
    private:
        const std::string   _name;
        const int           _grade_to_sign;
        const int           _grade_to_execute;
        bool                _is_signed;
};

std::ostream & operator<<( std::ostream& os, Form const & src);


#endif