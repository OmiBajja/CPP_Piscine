/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:29:52 by obajja            #+#    #+#             */
/*   Updated: 2025/10/30 00:56:14 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Cure: public AMateria{

    public:
        Cure();
        Cure( Cure const & src);
        ~Cure();
        Cure & operator=(Cure const & src);
        AMateria* clone() const;
        void use(ICharacter& target);

    private:
    
};



#endif