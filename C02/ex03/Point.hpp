/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:22:40 by obajja            #+#    #+#             */
/*   Updated: 2025/10/21 22:50:32 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef POINT_HPP
#define POINT_HPP

#include"Fixed.hpp"
#include <iostream>
#include <cmath>

class Point{

    public:
        
        Point ( void );
        Point ( float x, float y);
        Point ( Point const & to_copy );
        ~Point ( void );

        float getX ( void ) const;
        float getY ( void ) const;

        Point & operator=( Point const & src);
        
    private:

        Fixed const x;
        Fixed const y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif