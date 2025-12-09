/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:41:35 by obajja            #+#    #+#             */
/*   Updated: 2025/11/28 10:21:06 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try{
        Bureaucrat Joe("Joe", 140);
        std::cout << Joe << std::endl;
        ShrubberyCreationForm Piscine("Rat");
        std::cout << Piscine << std::endl;
        Joe.signForm(Piscine);
        Joe.executeForm(Piscine);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try{
        Bureaucrat Karl("Karl", 2);
        std::cout << Karl << std::endl;
        ShrubberyCreationForm DrivingExam("Rat");
        std::cout << DrivingExam << std::endl;
        Karl.signForm(DrivingExam);
        Karl.executeForm(DrivingExam);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    
    try{
        Bureaucrat Bilal("Bilal", 148);
        std::cout << Bilal << std::endl;
        PresidentialPardonForm BarExam("Rat");
        std::cout << BarExam << std::endl;
        Bilal.signForm(BarExam);
        Bilal.executeForm(BarExam);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try{
        Bureaucrat Racoon("Racoon", 2);
        std::cout << Racoon << std::endl;
        PresidentialPardonForm GCSE("Rat");
        std::cout << GCSE << std::endl;
        Racoon.signForm(GCSE);
        Racoon.executeForm(GCSE);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    
    try{
        Bureaucrat Baboon("Baboon", 149);
        std::cout << Baboon << std::endl;
        RobotomyRequestForm Minishell("Rat");
        std::cout << Minishell << std::endl;
        Baboon.signForm(Minishell);
        Baboon.executeForm(Minishell);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try{
        Bureaucrat Dinosaurs("Dinosaurs", 1);
        std::cout << Dinosaurs << std::endl;
        RobotomyRequestForm TaxForm("Rat");
        std::cout << TaxForm << std::endl;
        Dinosaurs.signForm(TaxForm);
        Dinosaurs.executeForm(TaxForm);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}