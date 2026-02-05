/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 22:41:51 by obajja            #+#    #+#             */
/*   Updated: 2026/02/05 16:52:44 by obajja           ###   ########.fr       */
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
        class FailOpenException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: Couldn't open file\n");
                };
        };

        class EmptyMapException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: Reference Map is empty\n");
                };
        };

        class BadDateException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: Isn't a valid date\n");
                };
        };
        
        class NegativeException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: not a positive number.\n");
                };
        };

        class TooLargeException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: too large a number.\n");
                };
        };

        class InvalidHeaderException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: Invalid Header.\n");
                };
        };

        void map_setup(const char * file, const char * delim);
        void input_setup(const char * file, const char * delim);

    private:

        std::string                     _date;
        double                          _value;
        std::map<std::string, double>   _BTC_Map;
};

void error_checker(std::string date, double value);