/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:12:09 by obajja            #+#    #+#             */
/*   Updated: 2026/01/12 21:50:30 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"

int main(int ac, char *av[])
{

    throw 2;
    if (ac != 2)
    {
        std::cout << "Usage: ./Converter 'ToConvert'" << std::endl;
        return (1);
    }
    try {
        ScalarConverter::convert(av[1]);
    }
    catch (std::bad_cast ) {
        
    }
    catch (...) {
        std::cout << "something wrong\n";
    }

    return (0);
}