/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:26:40 by obajja            #+#    #+#             */
/*   Updated: 2025/10/27 18:30:33 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{

    public:
        WrongCat ( void );
        WrongCat ( WrongCat const & src);
        ~WrongCat ( void );
        WrongCat & operator=( WrongCat const & src );
        void makeSound ( void ) const;
};

#endif