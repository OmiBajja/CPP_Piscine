
#include <iostream>
#include <string>
#include <Contact.class.hpp>

std::string Contact::get_string(std::string str){

    if (str == "first_name")
        return (this->first_name);
    else if (str == "last_name")
        return (this->last_name);
    else if (str == "nick_name")
        return (this->nick_name);
    else if (str == "phone_number")
        return (this->phone_number);
    else
        return (this->darkest_secret);
}

void    Contact::set_string(std::string str, std::string answer){

    if (str == "first_name")
        this->first_name = answer;
    else if (str == "last_name")
        this->last_name = answer;
    else if (str == "nick_name")
        this->nick_name = answer;
    else if (str == "phone_number")
        this->phone_number = answer;
    else
        this->darkest_secret = answer;
    return ;
}

Contact::Contact(void){
   
    return ;
}

Contact::~Contact(void){

    return ;
}