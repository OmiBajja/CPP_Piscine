/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:56:48 by obajja            #+#    #+#             */
/*   Updated: 2025/10/30 02:22:12 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character ()
{
    
}

Character::Character (std::string nickname)
{
    this->name = nickname;

    for (int i = 0; i < 4; i++)
        this->inventory[i] = 0;
    for (int i = 0; i < MAX_GARBAGE; i++)
        this->garbage[i] = 0;
}


Character::Character ( Character const & src )
{
    this->name = src.name;
    for (int i = 0; i < 4 && this->inventory[i]; i++)
        this->inventory[i] = 0;
    for (int i = 0; i < 4 && this->garbage[i]; i++)
        this->garbage[i] = 0;
    for (int i = 0; src.inventory[i]; i++)
    {
        this->inventory[i] = src.inventory[i]->clone();
    }
}

Character::~Character ()
{
    // for (int i = 0; i < 4; i++)
    // {
    //     if (this->inventory[i] != 0)
    //     {
    //         delete this->inventory[i];
    //     }
    // }
    // for (int j = 0; j < MAX_GARBAGE; j++)
    // {
    //     if (this->garbage[j] != 0)
    //     {        
    //         delete this->garbage[j];
    //     }
    // }
}

Character & Character::operator=( Character const & src )
{
    this->name = src.name;
    for (int i = 0; i < 4 && this->inventory[i]; i++)
    {
        delete this->inventory[i];
        this->inventory[i] = 0;
    }
    for (int i = 0; i < 4 && this->garbage[i]; i++)
    {
        delete this->garbage[i];
        this->garbage[i] = 0;
    }
    for (int i = 0; i < 4 && src.inventory[i]; i++)
    {
        this->inventory[i] = src.inventory[i]->clone();
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return(this->name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == m)
            return ;
        if (this->inventory[i] == 0)
        {
            this->inventory[i] = m;
            return ;
        }
    }
    delete m;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 4)
        return ;
    else if (this->inventory[idx] != 0)
    {
        for (int i = 0; i < MAX_GARBAGE; i++)
        {
            if (this->garbage[i] == 0)
            {
                garbage[i] = this->inventory[idx];
                this->inventory[idx] = 0;
                return ;
            }
        }
    }
    
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
        return ;
    if (this->inventory[idx] != 0)
    {
        this->inventory[idx]->use(target);
    }
    else
        std::cout << "It ain't much... but it's honest work" << std::endl;
}