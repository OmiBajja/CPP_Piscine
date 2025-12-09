/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 23:24:22 by obajja            #+#    #+#             */
/*   Updated: 2025/11/24 17:05:14 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{

    public:
        AForm(AForm const & src);
        AForm(const std::string name_to_set, int signing_grade, int executing_grade);
        virtual ~AForm();
        AForm &  operator=(AForm const & src);
        const std::string getName() const;
        bool        getSignature(void) const;
        void        setSignature(void);
        int         getGradeToSign() const;
        int         getGradeToExecute() const;
        void              beSigned(Bureaucrat & src);
        virtual void execute(Bureaucrat const & executor) const = 0;

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

std::ostream & operator<<( std::ostream& os, AForm const & src);


#endif