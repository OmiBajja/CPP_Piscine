/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntHandler.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:18:11 by obajja            #+#    #+#             */
/*   Updated: 2026/01/12 16:02:44 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"
#include <iostream>
#include <cctype>
#include <stdlib.h>

bool IntChecker(std::string toCheck)
{
    long result;
    char *endptr;
    
    if (toCheck.find("f") != std::string::npos)
        return (false);
    else if (toCheck.find(".") != std::string::npos)
        return (false);  
    result = strtol(toCheck.c_str(), &endptr, 10);
    (void)result;
    if (*endptr != '\0')
        return (false);
    return (true);
}

void IntPrinter(std::string toPrint)
{
    long print = atol(toPrint.c_str());
    
    if (print < 32 || print > 127)
        std::cout << "char: non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(print) << std::endl;
    if (print > 2147483647 || print < -2147483648)
        std::cout << "int: doesn't fit in an int" << std::endl;
    else    
        std::cout << "int: " << print << std::endl;
    std::cout << "float: " << static_cast<float>(print) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(print) << ".0" <<std::endl;
}