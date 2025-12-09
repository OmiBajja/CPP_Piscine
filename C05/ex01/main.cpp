/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:41:35 by obajja            #+#    #+#             */
/*   Updated: 2025/11/24 17:37:37 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat Benjamin("Benjamin", 330);
        std::cout << Benjamin << std::endl;

    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    
    try{
        Bureaucrat Rat("Rat", 0);
        std::cout << Rat << std::endl;

    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try{
        Bureaucrat June("June", 123);
        std::cout << June << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try{
        Bureaucrat Dinosaur("Dinosaur", 150);
        --Dinosaur;
        std::cout << Dinosaur << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try{
        Bureaucrat Starfish("Starfish", 1);
        ++Starfish;
        std::cout << Starfish << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try{
        Bureaucrat Monkey("Monkey", 19);
        std::cout << Monkey << std::endl;
        ++Monkey;
        std::cout << Monkey << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try{
        Bureaucrat Joe("Joe", 2);
        std::cout << Joe << std::endl;
        Form Piscine("Last Exam", 6, 23);
        std::cout << Piscine << std::endl;
        Joe.signForm(Piscine);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try{
        Bureaucrat Francois("Francois", 136);
        std::cout << Francois << std::endl;
        Form DrivingLicense("Driving Exam", 6, 23);
        std::cout << DrivingLicense << std::endl;
        Francois.signForm(DrivingLicense);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    
    try{
        Bureaucrat Giacomo("Giacomo", 136);
        std::cout << Giacomo << std::endl;
        Form MedicalExam("Blood Test", 0, 2);
        std::cout << MedicalExam << std::endl;
        Giacomo.signForm(MedicalExam);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try{
        Bureaucrat Hamza("Hamza", 136);
        std::cout << Hamza << std::endl;
        Form EntranceExam("Uni Test", 10, 200);
        std::cout << EntranceExam << std::endl;
        Hamza.signForm(EntranceExam);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}