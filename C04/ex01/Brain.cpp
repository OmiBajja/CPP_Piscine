/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:00:35 by obajja            #+#    #+#             */
/*   Updated: 2025/10/30 14:38:05 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain ( void )
{
   std::cout << "What a good day to be sentient" << std::endl;
}

Brain::Brain ( Brain const & src )
{
    *this = src;
}

Brain & Brain::operator=( Brain const & src )
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
    return (*this);
}

Brain::~Brain ( void )
{
   std::cout << "Nevermind... beind sentient sucks" << std::endl;
}

std::string Brain::getIdea( int idx ) const
{
    return (this->ideas[idx]);
}

void Brain::setIdea( std::string const thought, int idx)
{
    if (idx < 0 || idx > 100)
        return ;
    this->ideas[idx] = thought;
}