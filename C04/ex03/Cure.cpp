/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:30:37 by obajja            #+#    #+#             */
/*   Updated: 2025/10/30 00:55:18 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";   
}

Cure::Cure( Cure const & src): AMateria(src.getType())
{
    this->type = src.getType();
}

Cure::~Cure()
{

}

Cure & Cure::operator=(Cure const & src)
{
    this->type = src.getType();
    return (*this);
}

AMateria* Cure::clone() const
{
    AMateria *result = new Cure();

    return(result);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}