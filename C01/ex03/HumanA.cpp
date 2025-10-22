/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:19:16 by obajja            #+#    #+#             */
/*   Updated: 2025/10/15 12:01:20 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

void HumanA::attack(void)
{
    std::cout << "attacks with their " << this->weapon.getType() << std::endl;
}


HumanA::HumanA(std::string nickname, Weapon& object): name(nickname), weapon(object){}

HumanA::~HumanA(void)
{
    return;
}