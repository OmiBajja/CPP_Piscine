/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:22:51 by obajja            #+#    #+#             */
/*   Updated: 2025/10/22 11:31:56 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nombre_bits = 8;

Fixed::Fixed ( void ): nombre_vf(0)
{
    std::cout << "Default constructor called" << std::endl;
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
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->nombre_vf= src.getRawBits();
    return (*this);
}

int Fixed::getRawBits ( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;    
    return (this->nombre_vf);
}

void Fixed::setRawBits ( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;        
    this->nombre_vf = raw;
}

