/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:01:40 by obajja            #+#    #+#             */
/*   Updated: 2025/10/27 17:12:27 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat ( void )
{
    this->type = "Cat";
}

Cat::Cat ( Cat const & src): Animal ( src )
{

}

Cat::~Cat ( void )
{
}
Cat & Cat::operator=( Cat const & src )
{
    if (!src.getType().empty())
        this->type = src.getType();
    return (*this);
}

void Cat::makeSound ( void ) const
{
    std::cout << "Meow Meow" << std::endl;    
}