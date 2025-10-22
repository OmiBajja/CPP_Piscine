/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:14:18 by obajja            #+#    #+#             */
/*   Updated: 2025/10/21 22:45:55 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main ( void )
{

    Point a1(2.76f, 2.66f);
    Point b1(6.76f, 1.78f);
    Point c1(5.06f, 5.44f);
    Point p1(6.02f, 3.25f);

    std::cout << GREEN"For a triangle with coordinates: " << std::endl;
    std::cout << "A1: " << a1.getX() << " " << a1.getY() << std::endl;
    std::cout << "B1: " << b1.getX() << " " << b1.getY() << std::endl;
    std::cout << "C1: " << c1.getX() << " " << c1.getY() << std::endl;
    std::cout << UGREEN"\nIs point P with coordinates: " << std::endl;
    std::cout << "P1: " << p1.getX() << " " << p1.getY() << std::endl;
    std::cout << GREEN"\nInside the triangle?" << std::endl;

    if (bsp(a1,b1,c1,p1) == true)
        std::cout << BGREEN"\nThe answer is YES! It's inside\e[m" << std::endl;    
    else
        std::cout << BGREEN"\nThe answer is no... It isn't inside\e[m" << std::endl;


    Point a2(2.84f, 1.62f);
    Point b2(2.52f, 4.63f);
    Point c2(5.44f, 0.6f);
    Point p2(2.85f, 3.84f);

    std::cout << RED"\nFor a triangle with coordinates: " << std::endl;
    std::cout << "A2: " << a2.getX() << " " << a2.getY() << std::endl;
    std::cout << "B2: " << b2.getX() << " " << b2.getY() << std::endl;
    std::cout << "C2: " << c2.getX() << " " << c2.getY() << std::endl;
    std::cout << URED"\nIs point P with coordinates: " << std::endl;
    std::cout << "P2: " << p2.getX() << " " << p2.getY() << std::endl;
    std::cout << RED"Inside the triangle?" << std::endl;

    if (bsp(a2,b2,c2,p2) == true)
        std::cout << BRED"\nThe answer is YES! It's inside\e[m" << std::endl;    
    else
        std::cout << BRED"\nThe answer is no... It isn't inside\e[m" << std::endl;   

    Point a3(2.14f, 2.54f);
    Point b3(2.0f, 4.0f);
    Point c3(3.9f, 4.08f);
    Point p3(2.99f, 3.59f);

    std::cout << CYAN"\nFor a triangle with coordinates: " << std::endl;
    std::cout << "A3: " << a3.getX() << " " << a3.getY() << std::endl;
    std::cout << "B3: " << b3.getX() << " " << b3.getY() << std::endl;
    std::cout << "C3: " << c3.getX() << " " << c3.getY() << std::endl;
    std::cout << UCYAN"\nIs point P with coordinates: " << std::endl;
    std::cout << "P3: " << p3.getX() << " " << p3.getY() << std::endl;
    std::cout << CYAN"Inside the triangle?" << std::endl;

    if (bsp(a3,b3,c3,p3) == true)
        std::cout << BCYAN"\nThe answer is YES! It's inside\e[m" << std::endl;    
    else
        std::cout << BCYAN"\nThe answer is no... It isn't inside\e[m" << std::endl;


    Point a4(6.29f, 2.33f);
    Point b4(2.45f, 2.24f);
    Point c4(6.26f, 4.06f);
    Point p4(4.78f, 3.35f);

    std::cout << GREEN"\nFor a triangle with coordinates: " << std::endl;
    std::cout << "A4: " << a4.getX() << " " << a4.getY() << std::endl;
    std::cout << "B4: " << b4.getX() << " " << b4.getY() << std::endl;
    std::cout << "C4: " << c4.getX() << " " << c4.getY() << std::endl;
    std::cout << UGREEN"\nIs point P with coordinates: " << std::endl;
    std::cout << "P4: " << p4.getX() << " " << p4.getY() << std::endl;
    std::cout << GREEN"Inside the triangle?" << std::endl;

    if (bsp(a4,b4,c4,p4) == true)
        std::cout << BGREEN"\nThe answer is YES! It's inside\e[m" << std::endl;    
    else
        std::cout << BGREEN"\nThe answer is no... It isn't inside\e[m" << std::endl;

    Point a5(5.42f, 1.83f);
    Point b5(3.77f, 1.68f);
    Point c5(4.54f, 4.19f);
    Point p5(5.12f, 3.48f);

    std::cout << RED"\nFor a triangle with coordinates: " << std::endl;
    std::cout << "A5: " << a5.getX() << " " << a5.getY() << std::endl;
    std::cout << "B5: " << b5.getX() << " " << b5.getY() << std::endl;
    std::cout << "C5: " << c5.getX() << " " << c5.getY() << std::endl;
    std::cout << URED"\nIs point P with coordinates: " << std::endl;
    std::cout << "P5: " << p5.getX() << " " << p5.getY() << std::endl;
    std::cout << RED"Inside the triangle?" << std::endl;

    if (bsp(a5,b5,c5,p5) == true)
        std::cout << BRED"\nThe answer is YES! It's inside\e[m" << std::endl;    
    else
        std::cout << BRED"\nThe answer is no... It isn't inside\e[m" << std::endl;

    Point a6(5.42f, 1.83f);
    Point b6(3.77f, 1.68f);
    Point c6(4.54f, 4.19f);
    Point p6(5.42f, 1.83f);

    std::cout << CYAN"\nFor a triangle with coordinates: " << std::endl;
    std::cout << "A6: " << a6.getX() << " " << a6.getY() << std::endl;
    std::cout << "B6: " << b6.getX() << " " << b6.getY() << std::endl;
    std::cout << "C6: " << c6.getX() << " " << c6.getY() << std::endl;
    std::cout << UCYAN"\nIs point P with coordinates: " << std::endl;
    std::cout << "P6: " << p6.getX() << " " << p6.getY() << std::endl;
    std::cout << CYAN"Inside the triangle?" << std::endl;

    if (bsp(a6,b6,c6,p6) == true)
        std::cout << BCYAN"\nThe answer is YES! It's inside\e[m" << std::endl;    
    else
        std::cout << BCYAN"\nThe answer is no... It isn't inside\e[m" << std::endl;

    return (0);
}

