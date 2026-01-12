/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:38:43 by obajja            #+#    #+#             */
/*   Updated: 2026/01/07 20:36:23 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iterator>
#include <iostream>

int main( void ) {
    
    std::cout << "-- Vector tests --" << std::endl;
    int p[] = {13 , 42, 56, 1, 32, 74};
    std::vector<int> test(p, p + 5);
    try{
        std::vector<int>::const_iterator result_v = easyfind(test, 42);
        std::cout << "Printing result: " << *result_v << " and is at index " << result_v - test.begin() << std::endl;
        std::vector<int>::const_iterator result_v2 = easyfind(test, -123);
        std::cout << "Printing result: " << *result_v2 << std::endl;    
    }
    catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n-- List tests --" << std::endl;
    const std::list<int> lst(p, p + 5);
    try{
        std::list<int>::const_iterator result_l = easyfind(lst, 1);
        std::cout << "Printing result: " << *result_l  << " and is at index " << std::distance(lst.begin() , result_l) << std::endl;
        std::list<int>::const_iterator result_l2 = easyfind(lst, 99999);
        std::cout << "Printing result: " << *result_l2 << std::endl;
    }
    catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }

    return (0);
}