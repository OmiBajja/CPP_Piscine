/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:22:51 by obajja            #+#    #+#             */
/*   Updated: 2025/10/21 13:43:39 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nombre_bits = 8;

Fixed::Fixed ( void ): nombre_vf(0)
{
    return ;
}

Fixed::Fixed ( const int nb ): nombre_vf(nb << 8)
{    
    return ;
}

Fixed::Fixed ( const float nb )
{
    this->nombre_vf = roundf(nb * 256 );
    return ;   
}

Fixed::Fixed ( Fixed const & src)
{
    this->nombre_vf = src.getRawBits();
    return ;
}

Fixed::~Fixed (void)
{
    return ;   
}

Fixed& Fixed::operator= (Fixed const & src )
{
    if (this != &src)
        this->nombre_vf = src.nombre_vf;
    return (*this);
}

Fixed Fixed::operator+ (Fixed const & src ) const
{
    Fixed result;

    result = this->nombre_vf + src.nombre_vf;
    return (result);
}

Fixed Fixed::operator- (Fixed const & src ) const
{
    Fixed result;

    result = this->nombre_vf - src.nombre_vf;
    return (result);
}

Fixed Fixed::operator* (Fixed const & src ) const
{
    Fixed result;
    long long big;

    big = this->nombre_vf * src.nombre_vf;
    result.nombre_vf = big / 256;
    return (result);
}

Fixed Fixed::operator/ (Fixed const & src ) const
{
    Fixed result;

    result.nombre_vf = (this->nombre_vf * 256) / src.nombre_vf;
    return (result);
}

bool Fixed::operator==( Fixed const & src) const
{
    if (this->nombre_vf == src.nombre_vf)
        return (true);
    else
        return (false);
}

bool Fixed::operator!=( Fixed const & src) const
{
    if (this->nombre_vf != src.nombre_vf)
        return (true);
    else
        return (false);
}

bool Fixed::operator<=( Fixed const & src) const
{
    if (this->nombre_vf <= src.nombre_vf)
        return (true);
    else
        return (false);
}

bool Fixed::operator>=( Fixed const & src) const
{
    if (this->nombre_vf >= src.nombre_vf)
        return (true);
    else
        return (false);
}

bool Fixed::operator<( Fixed const & src) const
{
    if (this->nombre_vf < src.nombre_vf)
        return (true);
    else
        return (false);
}

bool Fixed::operator>( Fixed const & src) const
{
    if (this->nombre_vf > src.nombre_vf)
        return (true);
    else
        return (false);
}

Fixed & Fixed::operator++( void )
{
    this->nombre_vf += 1;
    return (*this);
}

Fixed Fixed::operator++( int temp )
{
    Fixed test;

    test = *this;
    (void) temp;
    this->nombre_vf += 1;
    return (test);
}

float Fixed::toFloat ( void ) const
{
    float result;

    result = this->nombre_vf / 256.0f;
    return (result);
}

int Fixed::toInt ( void ) const
{
    int result;

    result = this->nombre_vf >> 8;
    return (result);
}

int Fixed::getRawBits ( void ) const
{
    return (this->nombre_vf);
}

void Fixed::setRawBits ( int const raw )
{
    this->nombre_vf = raw;
}

Fixed const & Fixed::min (Fixed const &nb1, Fixed const &nb2)
{
    if (nb1.nombre_vf < nb2.nombre_vf)
        return (nb1);
    else
        return (nb2);
}

Fixed & Fixed::min (Fixed &nb1, Fixed &nb2)
{
    if (nb1.nombre_vf < nb2.nombre_vf)
        return (nb1);
    else
        return (nb2);
}

Fixed const & Fixed::max (Fixed const &nb1, Fixed const &nb2)
{
    if (nb1.nombre_vf > nb2.nombre_vf)
        return (nb1);
    else
        return (nb2);
}

Fixed & Fixed::max (Fixed &nb1,  Fixed &nb2)
{
    if (nb1.nombre_vf > nb2.nombre_vf)
        return (nb1);
    else
        return (nb2);
}

std::ostream & operator<<( std::ostream& os, Fixed const & src)
{
    float result;
    
    result = src.toFloat();
    os << result;
    return (os);
}