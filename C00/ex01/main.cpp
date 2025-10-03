
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"
#include <iostream>

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