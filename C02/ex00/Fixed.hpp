/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:22:40 by obajja            #+#    #+#             */
/*   Updated: 2025/10/22 11:31:51 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

    public:

        Fixed ( void );
        Fixed ( Fixed const & src);
        ~Fixed ( void );

        Fixed & operator=( Fixed const & src);
        
        int getRawBits ( void ) const;
        void setRawBits ( int const raw );

    private:

        int              nombre_vf;
        static const int nombre_bits;
    
};

#endif