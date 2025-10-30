/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:01:40 by obajja            #+#    #+#             */
/*   Updated: 2025/10/28 14:40:22 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat ( void )
{
    this->type = "Cat";
    std::cout << "Cat is awake and ready to eat" << std::endl;
    brain = new Brain();
}

Cat::Cat ( Cat const & src): AAnimal ( src )
{
    *this->brain = *src.brain;
}

Cat::~Cat ( void )
{
   std::cout << "Cat's already sound asleep" << std::endl;
   delete brain;
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