/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 22:41:51 by obajja            #+#    #+#             */
/*   Updated: 2026/01/12 15:13:33 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>

typedef struct s_BTC{
    
    std::string date;
    double      value;
    
}t_BTC;

std::map<std::string, double> map_setup(const char * file, const char * delim);
void input_setup(const char * file, const char * delim, std::map<std::string, double> BTC_MAP);