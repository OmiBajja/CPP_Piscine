/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:09:37 by obajja            #+#    #+#             */
/*   Updated: 2025/10/30 14:47:31 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog: public AAnimal{
    
    public:
        Dog ( void );
        Dog ( Dog const & src);
        ~Dog ( void );
        Dog & operator=( Dog const & src );
        void makeSound ( void ) const;
        std::string getIdea( int idx ) const;
        void setIdea( std::string const thought, int idx);

    private:
        Brain *brain;
    
};

#endif