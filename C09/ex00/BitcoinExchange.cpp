/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 22:41:55 by obajja            #+#    #+#             */
/*   Updated: 2026/01/12 15:34:26 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <map>

short error_checker(std::string date, double value)
{
    size_t pos = 0;
    int begin = 0;
    std::string result;
    int count = 0;

    while ((pos = date.find("-", begin)) != std::string::npos)
    {
        result = date.substr(begin, pos - begin);
        begin = pos + 1;

        int test = atoi(result.c_str());
        if (count == 0 && result.length() != 4)
        {
            std::cout << "Error: bad input => " << date << std::endl;
            return (1);
        }
        if (count == 1 && (test < 0 || test > 13))
        {
            std::cout << "Error: bad input => " << date << std::endl;
            return (1);
        }
        if (count == 2 && (test < 0 || test > 31))
        {
            std::cout << "Error: bad input => " << date << std::endl;
            return (1);
        }
        count++;
    }

    if (value < 0)
    {    
        std::cout << "Error: not a positive number." << std::endl;
        return (1);
    }

    else if (value > 2147483647)
    {    
        std::cerr << "Error: too large a number." << std::endl;
        return (1);
    }

    return (0);
}

void input_setup(const char * file, const char * delim, std::map<std::string, double> BTC_MAP)
{
    std::ifstream input(file);
    if (input.fail())
    {
        std::cerr << "Couldn't open " << file << std::endl;
        exit(1);
    }

    std::string line;
    size_t pos = 0;
    s_BTC BTC ;
    // int i = -1;

    getline(input, line);
    while (getline(input, line))
    {
        pos = line.find(delim);
        BTC.date = line.substr(0, pos);
        char *end;
        if (pos != std::string::npos)
            BTC.value = std::strtod(line.substr(pos + strlen(delim)).c_str(), &end);
        int error = error_checker(BTC.date, BTC.value);
        // std::cout << "Index I: " << ++i << " Error is: " << error << std::endl;
        if ( error == 0)
        {    
             std::map<std::string, double>::iterator it = BTC_MAP.lower_bound(BTC.date);
            if (it == BTC_MAP.end() || (it->first != BTC.date && it != BTC_MAP.begin()))
                --it;
            std::cout << BTC.date << " => " << BTC.value << " = " << it->second * BTC.value << std::endl;
        }
    }
    input.close();
}

std::map<std::string, double> map_setup(const char * file, const char * delim)
{
    std::ifstream input(file);
    if (input.fail())
    {
        std::cerr << "Couldn't open " << file << std::endl;
        exit(1);
    }

    std::map<std::string, double> BTC_map;
    std::string line;
    size_t pos = 0;
    s_BTC BTC ;

    getline(input, line);
    while (getline(input, line))
    {
        pos = line.find(delim);
        BTC.date = line.substr(0, pos);
        char *end;
        if (pos == std::string::npos)
            continue;
        BTC.value = std::strtod(line.substr(pos + strlen(delim)).c_str(), &end);
        //std::cout << "Date: '"<< BTC.date << "'  Value: '" << BTC.value << "'" << std::endl;
        BTC_map[BTC.date] = BTC.value;
    }
    // std::cout << BTC_map["2022-03-01"] << std::endl;
    input.close();
    return (BTC_map);
}