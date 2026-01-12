/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 10:22:36 by obajja            #+#    #+#             */
/*   Updated: 2025/12/17 00:10:54 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

bool CharChecker(std::string toCheck);
void CharPrinter(std::string toPrint);
bool IntChecker(std::string toCheck);
void IntPrinter(std::string toPrint);
bool FloatChecker(std::string toCheck);
void FloatPrinter(std::string toPrint);
bool DoubleChecker(std::string toCheck);
void DoublePrinter(std::string toPrint);
bool ExceptionChecker (std::string toCheck);
void ExceptionPrinter (std::string toCheck);
void ErrorPrinter(void);

class ScalarConverter{

    public:
        static void convert(std::string toConvert); 

    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(ScalarConverter const & src);
        ScalarConverter & operator=(ScalarConverter const & src);
};
