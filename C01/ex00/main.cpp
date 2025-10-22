/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:17:54 by obajja            #+#    #+#             */
/*   Updated: 2025/10/15 11:57:14 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* Fred;

    Fred = newZombie("Fred");
    Fred->announce();
    randomChump("Kevin");
    delete Fred;
    return (0);
}