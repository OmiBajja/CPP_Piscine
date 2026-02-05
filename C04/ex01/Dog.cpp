/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:06:09 by obajja            #+#    #+#             */
/*   Updated: 2025/10/30 14:40:49 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog ( void )
{
    this->type = "Dog";
    std::cout << "Dog is awake and wants to play" << std::endl;
    this->brain = new Brain();
}

Dog::Dog ( Dog const & src): Animal ( src )
{
    this->brain = new Brain(*src.brain);
}

Dog::~Dog ( void )
{
    std::cout << "Dog's night routine has started" << std::endl;
    delete brain;
}

Dog & Dog::operator=( Dog const & src )
{
    if (!src.getType().empty())
        this->type = src.getType();
    *this->brain = *src.brain;
    return (*this);
}

void Dog::makeSound ( void ) const
{
    std::cout << "Woof Woof" << std::endl;
}

std::string Dog::getIdea( int idx ) const
{
    return (this->brain->getIdea(idx));
}

void Dog::setIdea( std::string const thought, int idx)
{
    this->brain->setIdea(thought, idx);
}