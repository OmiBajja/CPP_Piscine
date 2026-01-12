/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:51:45 by obajja            #+#    #+#             */
/*   Updated: 2026/01/12 15:14:27 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"
#include <string>
#include <fstream>
#include <cstdlib>
#include <map>


// void handle_input(std::map<std::string, double> CMP_MAP, std::map<std::string, double> BTC_MAP)
// {
//     std::map<std::string, double>::iterator it;
//     int i = -1;
//     for (it = CMP_MAP.begin(); it != CMP_MAP.end(); it++)
//     {
//         int error = error_checker(it->first, it->second);
//         std::cout << "Index I: " << ++i << " Error is: " << error << std::endl;
//         if ( error == 0)
//             std::cout << it->first << " => " << it->second << " = " << BTC_MAP.lower_bound(it->first)->second * it->second << std::endl;
//     }
// }

int main(int argc, char** argv)
{
    if (argc == 2)
    {
        std::map<std::string, double> BTC_MAP = map_setup("data.csv", ",");
        if (BTC_MAP.empty())
            return (1);
        input_setup(argv[1], " | ", BTC_MAP);
    }
    else
    {
        std::cerr << "Invalid input \nUsage: ./btc 'input filename' " << std::endl;
        return (1);  
    }
    return (0);
}