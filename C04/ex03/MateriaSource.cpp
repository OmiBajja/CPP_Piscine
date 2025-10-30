/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:12:29 by obajja            #+#    #+#             */
/*   Updated: 2025/10/30 01:53:47 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
    for (int i = 0; i < 4; i++)
    {
        this->knowledge[i] = 0;
    }
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
    for (int i = 0; i < 4; i++)
    {
        this->knowledge[i] = src.knowledge[i];
    }
}
MateriaSource::~MateriaSource( void )
{
    for (int i = 0; i < 4; i++)
    {
        if (this->knowledge[i] != 0)
        {
            delete this->knowledge[i];
        }
    }
}
MateriaSource & MateriaSource::operator=(MateriaSource const & src )
{
    for (int i = 0; i < 4; i++)
    {
        this->knowledge[i] = src.knowledge[i];
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* nugget)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->knowledge[i] == 0)
        {
            this->knowledge[i] = nugget;
            return ;
        }
    }
    delete nugget;
}
AMateria* MateriaSource::createMateria(std::string const & type )
{
    for (int i = 0; i < 4; i++)
    {
        if (this->knowledge[i]->getType() == type)
        {
            return (this->knowledge[i]);
        }
    }
    return (0);
}