/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 22:41:55 by obajja            #+#    #+#             */
/*   Updated: 2026/01/14 19:36:29 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <map>


BTC::BTC(){}

BTC::BTC(BTC const & src): _date(src._date), _value(src._value)
{}

BTC & BTC::operator=(BTC const & src)
{
    if (this != &src)
    {
        _date = src._date;
        _value = src._value;
    }
    return (*this);
}

BTC::~BTC()
{
}

void BTC::input_setup(const char * file, const char * delim)
{
    std::ifstream input(file);
    if (input.fail())
    {
        std::cerr << "Couldn't open " << file << std::endl;
        exit(1);
    }

    if (this->_BTC_Map.empty())
    {
        std::cerr << "Error: Reference Map is empty " << file << std::endl;
        exit(1);
    }

    std::string line;
    size_t pos = 0;
    // int i = -1;

    getline(input, line);
    while (getline(input, line))
    {
        pos = line.find(delim);
        this->_date = line.substr(0, pos);
        char *end;
        if (pos != std::string::npos)
            this->_value = std::strtod(line.substr(pos + strlen(delim)).c_str(), &end);
        int error = error_checker(this->_date, this->_value);
        // std::cout << "Index I: " << ++i << " Error is: " << error << std::endl;
        if ( error == 0)
        {    
             std::map<std::string, double>::iterator it = this->_BTC_Map.lower_bound(this->_date);
            if (it == this->_BTC_Map.end() || (it->first != this->_date && it != this->_BTC_Map.begin()))
                --it;
            std::cout << this->_date << " => " << this->_value << " = " << it->second * this->_value << std::endl;
        }
    }
    input.close();
}

void BTC::map_setup(const char * file, const char * delim)
{
    std::ifstream input(file);
    if (input.fail())
    {
        std::cerr << "Couldn't open " << file << std::endl;
        exit(1);
    }

    std::string line;
    size_t pos = 0;

    getline(input, line);
    while (getline(input, line))
    {
        pos = line.find(delim);
        this->_date = line.substr(0, pos);
        char *end;
        if (pos == std::string::npos)
            continue;
        this->_value = std::strtod(line.substr(pos + strlen(delim)).c_str(), &end);
        //std::cout << "Date: '"<< this->_date << "'  Value: '" << this->_value << "'" << std::endl;
        this->_BTC_Map[this->_date] = this->_value;
    }
    // std::cout << BTC_map["2022-03-01"] << std::endl;
    input.close();
}

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