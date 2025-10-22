/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:22:40 by obajja            #+#    #+#             */
/*   Updated: 2025/10/21 22:35:05 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

// KOLOR
# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"

// BALD KOLOR
# define BBLACK "\033[1;30m"
# define BRED "\033[1;31m"
# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BBLUE "\033[1;34m"
# define BPURPLE "\033[1;35m"
# define BCYAN "\033[1;36m"
# define BWHITE "\033[1;37m"

// UNDERLINE
# define UBLACK "\033[4;30m"
# define URED "\033[4;31m"
# define UGREEN "\033[4;32m"
# define UYELLOW "\033[4;33m"
# define UBLUE "\033[4;34m"
# define UPURPLE "\033[4;35m"
# define UCYAN "\033[4;36m"
# define UWHITE "\033[4;37m"

# define CLEAR "\033c"
# define RESET_COLOR "\e[m"

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