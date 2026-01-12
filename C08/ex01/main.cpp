/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:38:43 by obajja            #+#    #+#             */
/*   Updated: 2026/01/08 14:35:17 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <list>
#include <iterator>
#include <iostream>
#include <cstdlib>


int main()
{
    try{
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        sp.addNumber(99);
    }

    catch (const std::exception &e){
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
    
    try{
        Span tab = Span(10000);
        srand(time(NULL));
        std::vector<int> vec;
        for (int i = 0; i < 10000; i++)
            vec.push_back(rand());
        tab.addNumbers(vec);
        std::cout << tab.shortestSpan() << std::endl;
        std::cout << tab.longestSpan() << std::endl;
        tab.addNumber(1);
    }

    catch (const std::exception &e){
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}