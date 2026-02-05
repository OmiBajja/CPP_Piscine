/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:51:45 by obajja            #+#    #+#             */
/*   Updated: 2026/01/14 18:11:38 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char** argv)
{
    if (argc == 2)
    {
        BTC BTC_Class;
        BTC_Class.map_setup("data.csv", ",");
        BTC_Class.input_setup(argv[1], " | ");
    }
    else
    {
        std::cerr << "Invalid input \nUsage: ./btc 'input filename' " << std::endl;
        return (1);  
    }
    return (0);
}