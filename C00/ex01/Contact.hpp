/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:11:58 by obajja            #+#    #+#             */
/*   Updated: 2025/10/14 11:20:11 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <sstream>
#include <cstdio>
#include <iostream>
#include <iomanip>

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