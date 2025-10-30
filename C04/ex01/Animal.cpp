/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:25:36 by obajja            #+#    #+#             */
/*   Updated: 2025/10/28 12:41:14 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal ( void )
{
    this->type = "Racoon";
    std::cout << "An animal has awaken" << std::endl;
}

Animal::Animal ( Animal const & src)
{
    if (!src.getType().empty())
        this->type = src.getType();
}

Animal::~Animal ( void )
{
    std::cout << "An animal has started hybernation" << std::endl;
}

Animal & Animal::operator=( Animal const & src )
{
    if (!src.getType().empty())
        this->type = src.getType();
    return (*this);
}

std::string Animal::getType( void ) const
{
    return (this->type);
}

void Animal::makeSound ( void ) const
{
    std::cout << "Bonk!" << std::endl;
}
