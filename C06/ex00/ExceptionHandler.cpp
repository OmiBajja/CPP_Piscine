/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ExceptionChecker.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 23:44:23 by obajja            #+#    #+#             */
/*   Updated: 2025/12/17 00:11:59 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"
#include <iostream>
#include <cctype>

void InfPrinterMoins(void)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: -inff" << std::endl;
    std::cout << "double: -inf" <<std::endl;
}

void InfPrinterPlus(void)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: +inff" << std::endl;
    std::cout << "double: +inf" <<std::endl;
}

void NanPrinter(void)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" <<std::endl;
}

void ExceptionPrinter (std::string toCheck)
{
    if (toCheck == "nan" || toCheck == "nanf")
        NanPrinter();
    else if (toCheck == "-inf" || toCheck == "-inff")
        InfPrinterMoins();
    else if (toCheck == "+inf" || toCheck == "+inff")
        InfPrinterPlus();
}

bool ExceptionChecker (std::string toCheck)
{
    if (toCheck == "nan" || toCheck == "nanf")
        return (true);
    else if (toCheck == "-inf" || toCheck == "-inff")
        return (true);
    else if (toCheck == "+inf" || toCheck == "+inff")
        return (true);
    else
        return (false);
}