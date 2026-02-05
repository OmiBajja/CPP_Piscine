/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:20:07 by obajja            #+#    #+#             */
/*   Updated: 2025/10/30 12:51:48 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


std::string WrongAnimal::getType( void ) const
{
    return (this->type);
}

WrongAnimal::WrongAnimal ( void )
{
    this->type = "Cthulhu";
}

WrongAnimal::WrongAnimal ( WrongAnimal const & src)
{
    if (!src.getType().empty())
        this->type = src.getType();
}

WrongAnimal::~WrongAnimal ( void )
{

}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & src )
{
    if (!src.getType().empty())
        this->type = src.getType();
    return (*this);
}

void WrongAnimal::makeSound ( void ) const
{
    std::cout << "Wrong Bonk!" << std::endl;
}
