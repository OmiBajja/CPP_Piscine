/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:16:37 by obajja            #+#    #+#             */
/*   Updated: 2025/11/20 12:00:23 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat{

    public:
        Bureaucrat(const std::string name_to_set, int grade_to_set);
        Bureaucrat(Bureaucrat const & src);
        ~Bureaucrat(void);
        Bureaucrat & operator=( Bureaucrat const & src );
        const std::string getName(void) const;
        int getGrade(void) const;
        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException(const std::string   _name, int _grade);
                ~GradeTooHighException();
                const std::string getName(void) const;
                int getGrade(void) const;
            private:
                const std::string   bureaucrat_name;
                int                 bureaucrat_grade;
        };
        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException(const std::string   _name, int _grade);
                ~GradeTooLowException();
                const std::string getName(void) const;
                int getGrade(void) const;
            private:
                const std::string   bureaucrat_name;
                int                 bureaucrat_grade;
        };
        
    private:
        const std::string   name;
        int                 grade;
};

std::ostream & operator<<( std::ostream& os, Bureaucrat const & src);



#endif