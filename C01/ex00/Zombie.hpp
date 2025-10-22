/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:17:31 by obajja            #+#    #+#             */
/*   Updated: 2025/10/15 11:56:25 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{

    private:
        std::string name;

    public:
        std::string get_string(void);
        void set_string(std::string name);
        void announce (void);
        Zombie(void);
        ~Zombie(void);
};

Zombie* newZombie( std::string name);
void randomChump( std::string name);

#endif