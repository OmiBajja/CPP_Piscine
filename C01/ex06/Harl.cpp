/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:15:37 by obajja            #+#    #+#             */
/*   Updated: 2025/10/13 16:13:41 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<Harl.hpp>

Harl::Harl(void) 
{
    return ;
}
Harl::~Harl(void)
{
    return ;
}

void Harl::info (void)
{
    std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!" << std::endl;
}

void Harl::debug (void)
{
    std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl; 
}

void Harl::warning (void)
{
    std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI\'ve been coming for years, whereas you started working here just last month." << std::endl; 
}

void Harl::error (void)
{
    std::cout << "[ERROR]\nThis is unacceptable!\nI want to speak to the manager now." << std::endl;
}

void Harl::complain (std::string level)
{
    std::string comp[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*functions[4])(void){&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};    
    int i = -1;
    
    while (++i < 4)
    {
        if (comp[i] == level)
        {    
            switch(i)
            {
                case 0:
                    while (i < 4)
                        (this->*functions[i++])();
                    return ;
                case 1:
                    while (i < 4)
                        (this->*functions[i++])();
                    return ;
                case 2:
                    while (i < 4)
                        (this->*functions[i++])();
                    return ;
                case 3:
                    (this->*functions[i++])();
                    return ;
                default:
                    return ;
            }
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}