/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:22:37 by obajja            #+#    #+#             */
/*   Updated: 2025/10/21 22:50:18 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point ( void ): x(0), y(0)
{

}
Point::Point ( float x_value, float y_value): x(x_value), y(y_value)
{

}

Point::Point ( Point const & to_copy ): x(to_copy.x), y(to_copy.y)
{

}

Point::~Point ( void )
{

}

Point& Point:: operator=( Point const & src)
{
    (void) src;

    return (*this);
}

float Point::getX ( void ) const
{
    return(this->x.toFloat());
}

float Point::getY ( void ) const
{
    return(this->y.toFloat());
}