/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:06:09 by obajja            #+#    #+#             */
/*   Updated: 2025/10/27 17:14:00 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog ( void )
{
    this->type = "Dog";
}

Dog::Dog ( Dog const & src): Animal ( src )
{

}

Dog::~Dog ( void )
{
}
Dog & Dog::operator=( Dog const & src )
{
    if (!src.getType().empty())
        this->type = src.getType();
    return (*this);
}

void Dog::makeSound ( void ) const
{
    std::cout << "Woof Woof" << std::endl;    
}