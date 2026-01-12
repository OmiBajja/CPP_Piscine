/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DoubleHandler.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:18:16 by obajja            #+#    #+#             */
/*   Updated: 2025/12/16 22:34:21 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"
#include <iostream>
#include <cctype>
#include <stdlib.h>
#include <cmath>


bool DoubleChecker(std::string toCheck)
{
    double result;
    char * endptr;

    if (toCheck.find("f") != std::string::npos)
        return (false);
    else if (toCheck.find(".") == std::string::npos)
        return (false);

    result = strtod(toCheck.c_str(), &endptr);
    (void)result;
    if (endptr == toCheck.c_str() || *endptr != '\0')
        return (false);

    else
        return (true);
}

void DoublePrinter(std::string toPrint)
{
    double print = atof(toPrint.c_str());
    
    if (print < 32 || print > 127)
        std::cout << "char: non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(print) << std::endl;
    std::cout << "int: " << static_cast<int>(print) << std::endl;
    if (fmod(print,1) != 0)
    {
        std::cout << "float: " << static_cast<float>(print) << "f" << std::endl;
        std::cout << "double: " << print <<std::endl;
    }
    else
    {
        std::cout << "float: " << static_cast<float>(print) << ".0f" << std::endl;
        std::cout << "double: " << print << ".0" <<std::endl;
    }

}