
#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"

class PhoneBook{

public:

    PhoneBook(void);
    ~PhoneBook(void);

    void Add_Contact(void);
    void Search_Contact(void);

private:
    Contact contacts[8];
    int     index;
};

#endif