/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:16:37 by obajja            #+#    #+#             */
/*   Updated: 2025/11/24 14:05:43 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat{

    public:
        Bureaucrat(const std::string name_to_set, int grade_to_set);
        Bureaucrat(Bureaucrat const & src);
        ~Bureaucrat(void);
        void              signForm( Form & src );
        Bureaucrat & operator=( Bureaucrat const & src );
        const std::string getName(void) const;
        int getGrade(void) const;
        Bureaucrat & operator++( void );
        Bureaucrat & operator--( void );
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
        const std::string   name;
        int                 grade;
};

std::ostream & operator<<( std::ostream& os, Bureaucrat const & src);



#endif