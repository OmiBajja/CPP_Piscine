/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:14:05 by obajja            #+#    #+#             */
/*   Updated: 2025/10/30 01:04:16 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(AMateria const & src)
{
    this->type = src.type;    
}

AMateria::AMateria()
{
    
}

AMateria::~AMateria()
{
    
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* What do i do with " << target.getName() << "? why does he have spaghetti in his pockets? *" << std::endl;
}