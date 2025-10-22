/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:19:20 by obajja            #+#    #+#             */
/*   Updated: 2025/10/15 12:01:25 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    public:
        void attack(void);
        HumanA(std::string nickname, Weapon& object);
        ~HumanA(void);
    private:
        std::string name;
        Weapon& weapon;
};

#endif