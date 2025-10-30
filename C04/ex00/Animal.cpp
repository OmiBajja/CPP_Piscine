/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:25:36 by obajja            #+#    #+#             */
/*   Updated: 2025/10/28 14:29:30 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


std::string Animal::getType( void ) const
{
    return (this->type);
}

Animal::Animal ( void )
{
    this->type = "Racoon";
}

Animal::Animal ( Animal const & src)
{
    if (!src.getType().empty())
        this->type = src.getType();
}

Animal::~Animal ( void )
{

}

Animal & Animal::operator=( Animal const & src )
{
    if (!src.getType().empty())
        this->type = src.getType();
    return (*this);
}

void Animal::makeSound ( void ) const
{
    std::cout << "Bonk!" << std::endl;
}
