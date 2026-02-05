/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 22:41:51 by obajja            #+#    #+#             */
/*   Updated: 2026/01/14 19:37:23 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>

class BTC{

    public:

        BTC();
        BTC(BTC const & src);
        BTC & operator=(BTC const & src);
        ~BTC();
        void map_setup(const char * file, const char * delim);
        void input_setup(const char * file, const char * delim);

    private:

        std::string                     _date;
        double                          _value;
        std::map<std::string, double>   _BTC_Map;
};

short error_checker(std::string date, double value);