/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:22:40 by obajja            #+#    #+#             */
/*   Updated: 2025/10/20 15:11:59 by obajja           ###   ########.fr       */
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

        bool operator==( Fixed const & src) const;
        bool operator!=( Fixed const & src) const;
        bool operator<( Fixed const & src) const;
        bool operator>( Fixed const & src) const;
        bool operator<=( Fixed const & src) const;
        bool operator>=( Fixed const & src) const;

        Fixed & operator++( void );
        Fixed operator++( int temp);

        Fixed operator+( Fixed const & src) const;
        Fixed operator-( Fixed const & src) const;
        Fixed operator*( Fixed const & src) const;
        Fixed operator/( Fixed const & src) const;

        
        
        static Fixed & min (Fixed &nb1, Fixed &nb2);
        static Fixed const & min (Fixed const &nb1, Fixed const &nb2);
        static Fixed & max (Fixed &nb1, Fixed &nb2);
        static Fixed  const & max (Fixed const &nb1, Fixed const &nb2);
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