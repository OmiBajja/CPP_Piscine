/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ErrorPrinter.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 21:58:17 by obajja            #+#    #+#             */
/*   Updated: 2025/12/16 21:58:33 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"
#include <iostream>

void ErrorPrinter(void)
{
    std::cout << "char: Error" << std::endl;
    std::cout << "int: Error" << std::endl;
    std::cout << "float: Error"  << std::endl;
    std::cout << "double: Error" <<std::endl;
}