/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 10:22:58 by obajja            #+#    #+#             */
/*   Updated: 2026/01/12 15:58:06 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    
}
ScalarConverter::~ScalarConverter()
{
    
}
ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
    (void)src;
}
ScalarConverter & ScalarConverter::operator=(ScalarConverter const & src)
{
    (void)src;
    return (*this);
}

void ScalarConverter::convert(std::string toConvert)
{
    if (ExceptionChecker(toConvert))
        ExceptionPrinter(toConvert);
    else if (CharChecker(toConvert))
        CharPrinter(toConvert);
    else if (IntChecker(toConvert))
        IntPrinter(toConvert);
    else if (DoubleChecker(toConvert))
        DoublePrinter(toConvert);
    else if (FloatChecker(toConvert))
        FloatPrinter(toConvert);
    else
        ErrorPrinter();
}