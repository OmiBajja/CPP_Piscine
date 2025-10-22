/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:18:28 by obajja            #+#    #+#             */
/*   Updated: 2025/10/15 11:59:05 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::set_string(std::string name)
{
    this->name = name;
}

std::string Zombie::get_string(void)
{
    return (name);
}

void Zombie::announce (void)
{
    std::cout << this->get_string() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
    return ;
}

Zombie::~Zombie(void)
{
    if (!this->name.empty())
        std::cout << this->name << ": Damn I died..." << std::endl;
    return ;
}