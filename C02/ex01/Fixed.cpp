/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:22:51 by obajja            #+#    #+#             */
/*   Updated: 2025/10/19 22:32:51 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nombre_bits = 8;

Fixed::Fixed ( void ): nombre_vf(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;   
}

Fixed::Fixed ( const int nb ): nombre_vf(nb << 8)
{
    std::cout << "Int constructor called" << std::endl;
    
    return ;   
}

Fixed::Fixed ( const float nb )
{
    this->nombre_vf = roundf(nb * 256 );
    std::cout << "Float constructor called" << std::endl;
    return ;   
}

Fixed::Fixed ( Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->nombre_vf = src.getRawBits();
    return ;
}

Fixed::~Fixed (void)
{
    std::cout << "Destructor called" << std::endl;
    return ;   
}

Fixed& Fixed::operator= (Fixed const & src )
{
    if (this != &src)
        this->nombre_vf= src.nombre_vf;
    std::cout << "Copy assignment operator called" << std::endl;    
    return (*this);
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

std::ostream & operator<<( std::ostream& os, Fixed const & src)
{
    float result;
    
    result = src.getRawBits() / 256.0f;
    os << result;
    return (os);
}
