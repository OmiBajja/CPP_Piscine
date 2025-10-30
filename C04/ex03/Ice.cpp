/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:22:43 by obajja            #+#    #+#             */
/*   Updated: 2025/10/30 00:56:56 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";   
}

Ice::Ice( Ice const & src): AMateria(src.getType())
{
    this->type = src.getType();
}

Ice::~Ice()
{

}

Ice & Ice::operator=(Ice const & src)
{
    this->type = src.getType();
    return (*this);
}

AMateria* Ice::clone() const
{
    AMateria *result = new Ice();

    return(result);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}