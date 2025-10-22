/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:19:25 by obajja            #+#    #+#             */
/*   Updated: 2025/10/15 12:02:20 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack(void)
{
    if (!this->weapon->getType().empty())
        std::cout << "attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << "tried to attack " << std::endl;
}

void HumanB::setWeapon(Weapon arm)
{
    *this->weapon = arm;
}

HumanB::HumanB(std::string nickname)
{
    this->name = nickname;
}
HumanB::~HumanB(void)
{
    return;
}