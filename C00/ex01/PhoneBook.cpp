/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:12:14 by obajja            #+#    #+#             */
/*   Updated: 2025/10/14 11:41:49 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

std::string  clean_input(const std::string prompt){

    std::string Input;

    while(42){

        std::cout << prompt << std::endl;   
        if (!std::getline(std::cin,Input)){
            freopen("/dev/tty", "r", stdin);
            std::cin.clear();
        }
        if (!Input.empty())
            return (Input);
        std::cout << "Input not found, Please try again" << std::endl;
    }
}

void PhoneBook::Add_Contact(void){

    if (index == 8)
        index = 0;

    contacts[index].set_string("first_name", clean_input("Please enter the First Name"));

    contacts[index].set_string("last_name",  clean_input("Please enter the Last Name"));

    contacts[index].set_string("nick_name",  clean_input("Please enter the Nick Name"));

    contacts[index].set_string("phone_number",  clean_input("Please enter the Phone Number"));

    contacts[index].set_string("darkest_secret",  clean_input("Please enter your darkest secret"));

    std::cout << "Contact " << contacts[index].get_string("first_name") << " added!\n" << std::endl;

    index++;
    return ;

}

void print_index(int index){

    std::cout << "|";
    std::cout << std::setw(10) << index;
}


void print_string(const std::string &string){
    
    if (string.length() > 10)
        std::cout << std::setw(10) << string.substr(0,9) + ".";
    else
        std::cout << std::setw(10) << string;
}

void print_column(const std::string &string){

    std::cout << "|";
    print_string(string);
}

void PhoneBook::Search_Contact(void){

    std::string Input;
    int to_find;
    int i;

    i = -1;
    if (!contacts[0].get_string("first_name").empty())
    {
        std::cout << "\n------------------ SEARCH -------------------"<< std::endl;
        std::cout << "|   Index  | 1st name | lst name | nickname |"<< std::endl;
        while (++i < 8 && !contacts[i].get_string("first_name").empty())
        {
            print_index(i);
            print_column(contacts[i].get_string("first_name"));
            print_column(contacts[i].get_string("last_name"));
            print_column(contacts[i].get_string("nick_name"));
            std::cout << "|" << std::endl;
        }
        while (!contacts[0].get_string("first_name").empty()){
            Input = clean_input("\nPlease, enter the index of the contact you are looking for:");
            if (Input >= "0" && Input <= "7"){
                std::stringstream ss(Input);
                ss >> to_find;
                if (to_find >= 0 && to_find < i){
                    std::cout << "First Name     : " << contacts[to_find].get_string("first_name") << std::endl;
                    std::cout << "Last Name      : " << contacts[to_find].get_string("last_name") << std::endl;
                    std::cout << "Nick Name      : " << contacts[to_find].get_string("nick_name") << std::endl;
                    std::cout << "Phone Number   : " << contacts[to_find].get_string("phone_number") << std::endl;
                    std::cout << "Darkest Secret : " << contacts[to_find].get_string("darkest_secret") << "\n" << std::endl;
                    break;
                }
                else
                    std::cout << "\nIndex is incorrect or inexistent, please try again." << std::endl;
            }
            else
                std::cout << "\nIndex is incorrect or inexistent, please try again" << std::endl;
        }
    }
    else
        std::cout << "The contact table is empty, please try again after adding a contact.\n" << std::endl;
    return ;
}

PhoneBook::PhoneBook(void){
    index = 0;
    return ;

}

PhoneBook::~PhoneBook(void){
    return ;
}