#include <string>
#include <iostream>

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact{

public:

    Contact(void);
    ~Contact(void);
    std::string get_string(std::string str);
    void        set_string(std::string str, std::string answer);

private:

    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;
};

#endif