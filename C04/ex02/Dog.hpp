/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:09:37 by obajja            #+#    #+#             */
/*   Updated: 2025/10/28 14:39:05 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog: public AAnimal{
    
    public:
        Dog ( void );
        Dog ( Dog const & src);
        ~Dog ( void );
        Dog & operator=( Dog const & src );
        void makeSound ( void ) const;
    private:
        Brain *brain;
    
};

#endif