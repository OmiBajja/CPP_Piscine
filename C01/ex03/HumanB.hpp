/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:19:29 by obajja            #+#    #+#             */
/*   Updated: 2025/10/15 12:02:08 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:
        void attack(void);
        void setWeapon(Weapon arm);
        HumanB(std::string nickname);
        ~HumanB(void);
    private:
        std::string name;
        Weapon* weapon;
};

#endif