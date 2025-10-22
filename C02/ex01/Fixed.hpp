/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:22:40 by obajja            #+#    #+#             */
/*   Updated: 2025/10/19 22:07:13 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

    public:

        Fixed ( void );
        Fixed ( const int );
        Fixed ( const float );
        Fixed ( Fixed const & src);
        ~Fixed ( void );

        Fixed & operator=( Fixed const & src);
        
        float toFloat ( void ) const;
        int toInt ( void ) const;
        int getRawBits ( void ) const;
        void setRawBits ( int const raw );

    private:

        int             nombre_vf;
        static const int nombre_bits;
    
};

std::ostream & operator<<( std::ostream& os, Fixed const & src);


#endif