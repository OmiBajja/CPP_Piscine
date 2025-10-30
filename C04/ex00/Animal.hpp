/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:07:00 by obajja            #+#    #+#             */
/*   Updated: 2025/10/28 14:33:10 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{

    public:

        Animal ( void );
        Animal ( Animal const & src);
        virtual ~Animal ( void );
        Animal & operator=( Animal const & src );
        std::string getType( void ) const;
        virtual void makeSound ( void ) const;
        
    protected:
        std::string type;
};





#endif