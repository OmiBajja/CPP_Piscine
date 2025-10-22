/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:18:37 by obajja            #+#    #+#             */
/*   Updated: 2025/10/15 11:58:57 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* Horde;
    int     i;

    i = -1;
    Horde = new Zombie[N];
    while (++i < N)
        Horde[i].set_string(name);
    return (Horde);
}
