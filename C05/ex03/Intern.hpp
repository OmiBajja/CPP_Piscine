/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:58:38 by obajja            #+#    #+#             */
/*   Updated: 2025/12/09 12:25:46 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

typedef struct  s_factory{
    
    std::string name;
    AForm* (*create_form)(const std::string &);

}   t_factory;

class Intern{

    public:
        Intern(void);
        Intern(Intern const & src);
        ~Intern(void);
        Intern & operator=( Intern const & src );
        AForm* makeForm(std::string FormName, std::string target);
        class FormNotFound : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

    private:
        static AForm *NewRobotomy(const std::string &target);
        static AForm *NewPresidential(const std::string &target);
        static AForm *NewShrubbery(const std::string &target);
};


#endif