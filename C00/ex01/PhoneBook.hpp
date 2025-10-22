/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:12:20 by obajja            #+#    #+#             */
/*   Updated: 2025/10/14 11:20:16 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

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