/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:18:20 by obajja            #+#    #+#             */
/*   Updated: 2025/10/30 00:56:54 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Ice: public AMateria{

    public:
        Ice();
        Ice( Ice const & src);
        ~Ice();
        Ice & operator=(Ice const & src);
        AMateria* clone() const;
        void use(ICharacter& target);

    private:
    
};


#endif