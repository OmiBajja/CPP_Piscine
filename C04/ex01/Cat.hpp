/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:11:05 by obajja            #+#    #+#             */
/*   Updated: 2025/10/28 13:46:48 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat: public Animal{

    public:
        Cat ( void );
        Cat ( Cat const & src);
        ~Cat ( void );
        Cat & operator=( Cat const & src );
        void makeSound ( void ) const;
    
    private:
        Brain *brain;    
};

#endif