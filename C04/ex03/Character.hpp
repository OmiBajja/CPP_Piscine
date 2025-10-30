/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:32:20 by obajja            #+#    #+#             */
/*   Updated: 2025/10/30 01:19:39 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

#define MAX_GARBAGE 100

class Character: public ICharacter{

    public:
        Character ();
        Character (std::string name);
        Character ( Character const & src );
        ~Character ();
        Character & operator=( Character const & src );

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    
    private:
        std::string name;
        AMateria *inventory[4];
        AMateria *garbage[MAX_GARBAGE];
};


#endif