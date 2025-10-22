/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:22:35 by obajja            #+#    #+#             */
/*   Updated: 2025/10/21 23:05:35 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{

    float det1;
    float det2;
    float det3;

    det1 = ((c.getX() - point.getX()) * (a.getY() - point.getY()) -
    (c.getY() - point.getY()) * (a.getX() - point.getX()));
    
    det2 = ((a.getX() - point.getX()) * (b.getY() - point.getY()) -
    (a.getY() - point.getY()) * (b.getX() - point.getX()));

    det3 = ((b.getX() - point.getX()) * (c.getY() - point.getY()) -
    (b.getY() - point.getY()) * (c.getX() - point.getX()));

    std::cout << "This is the values of: det1 " << det1 << std::endl;
    std::cout << "This is the values of: det2 " << det2 << std::endl;
    std::cout << "This is the values of: det3 " << det3 << std::endl;

    if ((det1 > 1 / 256.0f && det2 > 1 / 256.0f && det3 > 1 / 256.0f) || (det1 < -1 / 256.0f && det2 < -1 / 256.0f && det3 < -1 / 256.0f))
        return (true);
    else
        return (false);
}