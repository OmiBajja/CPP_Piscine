/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:07:00 by obajja            #+#    #+#             */
/*   Updated: 2025/10/28 14:36:48 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal{

    public:

        AAnimal ( void );
        AAnimal ( AAnimal const & src);
        virtual ~AAnimal ( void );
        AAnimal & operator=( AAnimal const & src );
        std::string getType( void ) const;
        virtual void makeSound ( void ) const = 0;
        
    protected:
        std::string type;
};





#endif