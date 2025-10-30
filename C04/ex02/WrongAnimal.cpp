/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:20:07 by obajja            #+#    #+#             */
/*   Updated: 2025/10/28 12:47:52 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal ( void )
{
    std::cout << "A weird creature has awaken" << std::endl;
}

WrongAnimal::WrongAnimal ( WrongAnimal const & src)
{
    if (!src.getType().empty())
        this->type = src.getType();
}

WrongAnimal::~WrongAnimal ( void )
{
    std::cout << "We finally contained this monstrosity" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & src )
{
    if (!src.getType().empty())
        this->type = src.getType();
    return (*this);
}

std::string WrongAnimal::getType( void ) const
{
    return (this->type);
}

void WrongAnimal::makeSound ( void ) const
{
    std::cout << "Wrong Bonk!" << std::endl;
}
