/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:41:35 by obajja            #+#    #+#             */
/*   Updated: 2025/11/20 14:48:07 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat Mark("Mark", 330);
    }
    catch(Bureaucrat::GradeTooHighException& high)
    {
        std::cout << "You want to give " << high.getName() << "a grade of " << high.getGrade() << "!?? What are you mad! That's waaaaaaaay too high";
    }
    catch(Bureaucrat::GradeTooLowException& low)
    {
        std::cout << "Are you really giving " << low.getName() << "a grade of " << low.getGrade() << "?... That's messed up! That's really low";
    }
    
    try{
        Bureaucrat Rat("Rat", 0);
    }
    catch(Bureaucrat::GradeTooHighException& high)
    {
        std::cout << ;
    }
    catch(Bureaucrat::GradeTooLowException& low)
    {
        std::cout << ;
    }

    try{
        Bureaucrat June("June", 123);
    }
    catch(Bureaucrat::GradeTooHighException& high)
    {
        std::cout << ;
    }
    catch(Bureaucrat::GradeTooLowException& low)
    {
        std::cout << ;
    }

    return (0);
}