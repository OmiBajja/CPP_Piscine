/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:01:40 by obajja            #+#    #+#             */
/*   Updated: 2025/10/30 14:43:40 by obajja           ###   ########.fr       */
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

Cat::Cat ( Cat const & src): Animal ( src )
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
    *this->brain = *src.brain;
    return (*this);
}

void Cat::makeSound ( void ) const
{
    std::cout << "Meow Meow" << std::endl;    
}

std::string Cat::getIdea( int idx ) const
{
    return (this->brain->getIdea(idx));
}

void Cat::setIdea( std::string const thought, int idx)
{
    this->brain->setIdea(thought, idx);
}