/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:26:37 by obajja            #+#    #+#             */
/*   Updated: 2025/10/28 12:48:36 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat ( void )
{
    this->type = "WrongCat";
    std::cout << "Is this a cat or a rat?" << std::endl;
}

WrongCat::WrongCat ( WrongCat const & src): WrongAnimal ( src )
{

}

WrongCat::~WrongCat ( void )
{
    std::cout << "It WAS a rat I guess... rip" << std::endl;
}
WrongCat & WrongCat::operator=( WrongCat const & src )
{
    if (!src.getType().empty())
        this->type = src.getType();
    return (*this);
}

void WrongCat::makeSound ( void ) const
{
    std::cout << "Wrong Meow Meow" << std::endl;    
}