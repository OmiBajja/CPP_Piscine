/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 22:41:55 by obajja            #+#    #+#             */
/*   Updated: 2026/02/05 16:53:13 by obajja           ###   ########.fr       */
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
    try{
        std::ifstream input(file);
        
        if (input.fail())
            throw BTC::FailOpenException();

        if (this->_BTC_Map.empty())
            throw BTC::EmptyMapException();
        
        std::string line;
        size_t pos = 0;

        getline(input, line);
        if (line != "date | value")
            throw BTC::InvalidHeaderException();
        while (getline(input, line))
        {
            pos = line.find(delim);
            this->_date = line.substr(0, pos);
            char *end;
            if (pos != std::string::npos)
                this->_value = std::strtod(line.substr(pos + strlen(delim)).c_str(), &end);
            try{
                error_checker(this->_date, this->_value);
                std::map<std::string, double>::iterator it = this->_BTC_Map.lower_bound(this->_date);
                if (it == this->_BTC_Map.end() || (it->first != this->_date && it != this->_BTC_Map.begin()))
                    --it;
                std::cout << this->_date << " => " << this->_value << " = " << it->second * this->_value << std::endl; 
            }
            catch (const std::exception &e) {
                std::cerr << e.what();
            }
        }
        input.close();
    }

    catch (const std::exception &e) {
        std::cerr << e.what();
    }
}

void BTC::map_setup(const char * file, const char * delim)
{
    std::ifstream input(file);
    if (input.fail())
        throw BTC::FailOpenException();

    std::string line;
    size_t pos = 0;

    getline(input, line);
    if (line != "date,exchange_rate")
        throw BTC::InvalidHeaderException();
    while (getline(input, line))
    {
        pos = line.find(delim);
        this->_date = line.substr(0, pos);
        char *end;
        if (pos == std::string::npos)
            continue;
        this->_value = std::strtod(line.substr(pos + strlen(delim)).c_str(), &end);
        this->_BTC_Map[this->_date] = this->_value;
    }
    input.close();
}

void error_checker(std::string date, double value)
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
            throw BTC::BadDateException();
        if (count == 1 && (test < 0 || test > 13))
            throw BTC::BadDateException();
        if (count == 2 && (test < 0 || test > 31))
            throw BTC::BadDateException();
        count++;
    }

    if (value < 0)
        throw BTC::NegativeException();

    else if (value > 1000)
        throw BTC::TooLargeException();
}