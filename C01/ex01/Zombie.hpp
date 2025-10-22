/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:18:33 by obajja            #+#    #+#             */
/*   Updated: 2025/10/15 11:58:33 by obajja           ###   ########.fr       */
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

Zombie* zombieHorde( int N, std::string name );


#endif