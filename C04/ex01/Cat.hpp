/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:11:05 by obajja            #+#    #+#             */
/*   Updated: 2025/10/30 14:07:12 by obajja           ###   ########.fr       */
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
        std::string getIdea( int idx ) const;
        void setIdea( std::string const thought, int idx);
    
    private:
        Brain *brain;
};

#endif