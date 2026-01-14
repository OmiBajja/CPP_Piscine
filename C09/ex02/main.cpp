/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:51:45 by obajja            #+#    #+#             */
/*   Updated: 2026/01/14 19:42:27 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"
#include <vector>

std::vector<int> input_sanitizer(int argc, char** av)
{
    std::vector<int> result;

    for (int i = 0; i < argc; i++)
    {
        char *endptr;
        long num = strtol(av[i],&endptr, 10);
        if (( *endptr != '\0' || num < 0 || num > 2147483647 || num < -2147483648))
        {
            std::cout << "Error: an Invalid number used.\nPlease use only positive integers.\n";
            exit (1);
        }
        else
        {
            result.push_back(num);
        }


    }

    return (result);
}


int main(int argc, char** argv)
{
    if (argc == 1)
    {
       std::cerr << "Error:  Usage:./RPN 'numbers and operations'\n";
        return (1);
    }
    else
    {
        std::vector<int> input;
        input = input_sanitizer(&argv[1]);    
    }
    return (0);
}