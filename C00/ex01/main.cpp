/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:12:06 by obajja            #+#    #+#             */
/*   Updated: 2025/10/14 11:20:25 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void command_handler(const std::string &command, PhoneBook &instance)
{
    if (command == "ADD")
        instance.Add_Contact();
    else if (command == "SEARCH")
        instance.Search_Contact();
    else
        std::cout << "Usage: ADD, SEARCH, EXIT" << std::endl;
}

int main (void)
{
    PhoneBook   instance;
    std::string command;

    std::cout << "Welcome to Omi's PhoneBook \n Usage: ADD, SEARCH, EXIT" << std::endl;
    while (42){
        if (!std::getline(std::cin, command))
            break;
        if (command == "EXIT"){
            std::cout << "Exiting" << std::endl;
            break;
        }
        command_handler(command, instance);
    }
    return (0);
}