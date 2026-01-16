/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:51:45 by obajja            #+#    #+#             */
/*   Updated: 2026/01/15 12:36:23 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"

int main(int argc, char** argv)
{
    if (argc > 1)
    {
        PmergeMe sorting;
        try{
            sorting.input_sanitizer(argc, &argv[1]);
        }

        catch (std::exception & e)
        {
            std::cout << e.what();
        }
    }
    else
    {
       std::cerr << "Error:  Usage:./PmergeMe 'n1' 'n2' 'n3' 'n4' 'numbers to sort' \n";
        return (1);
    }
    return (0);
}