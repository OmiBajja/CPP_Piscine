/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:19:44 by obajja            #+#    #+#             */
/*   Updated: 2025/10/15 12:05:32 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string set)
{
    this->type = set;
}
const std::string& Weapon::getType( void )
{
    return (this->type);
}
Weapon::Weapon (std::string arm): type(arm)
{
    return ;
}

Weapon::~Weapon (void)
{
    return ;
}