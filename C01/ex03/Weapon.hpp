/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:19:50 by obajja            #+#    #+#             */
/*   Updated: 2025/10/10 14:19:51 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<iostream>

class Weapon{

    public:
        const std::string& getType( void );
        void setType(std::string set);
        Weapon (std::string arm);
        ~Weapon (void);

    private:
        std::string type;
};
#endif