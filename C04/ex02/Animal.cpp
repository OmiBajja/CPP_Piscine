/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:25:36 by obajja            #+#    #+#             */
/*   Updated: 2025/10/28 14:43:03 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal ( void )
{
    this->type = "Racoon";
    std::cout << "An animal has awaken" << std::endl;
}

AAnimal::AAnimal ( AAnimal const & src)
{
    if (!src.getType().empty())
        this->type = src.getType();
}

AAnimal::~AAnimal ( void )
{
    std::cout << "An animal has started hybernation" << std::endl;
}

AAnimal & AAnimal::operator=( AAnimal const & src )
{
    if (!src.getType().empty())
        this->type = src.getType();
    return (*this);
}

std::string AAnimal::getType( void ) const
{
    return (this->type);
}
