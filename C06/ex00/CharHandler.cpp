/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharHandler.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:18:19 by obajja            #+#    #+#             */
/*   Updated: 2025/12/16 21:34:37 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"
#include <iostream>
#include <cctype>

bool CharChecker(std::string toCheck)
{
    char check = toCheck[0];

    if (toCheck.length() != 1)
        return (false);
    else if (!std::isprint(check))
        return (false);
    else if (std::isdigit(check))
        return (false);
    else
        return (true);
}

void CharPrinter(std::string toPrint)
{
    char print = toPrint[0];

    std::cout << "char: " << toPrint << std::endl;
    std::cout << "int: " << static_cast<int>(print) << std::endl;
    std::cout << "float: " << static_cast<float>(print) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(print) << ".0" <<std::endl;
}