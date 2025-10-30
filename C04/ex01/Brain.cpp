/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:00:35 by obajja            #+#    #+#             */
/*   Updated: 2025/10/28 14:25:55 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain ( void )
{
   std::cout << "What a good day to be sentient" << std::endl;
}

Brain::Brain ( Brain const & src )
{
    if (!src.ideas[0].empty())
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = src.ideas[i];
    }
}

Brain::~Brain ( void )
{
   std::cout << "Nevermind... beind sentient sucks" << std::endl;
}

Brain & Brain::operator=( Brain const & src )
{
    if (!src.ideas[0].empty())
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = src.ideas[i];
    }
    return (*this);
}
