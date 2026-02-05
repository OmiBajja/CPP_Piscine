/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:51:45 by obajja            #+#    #+#             */
/*   Updated: 2026/01/14 15:18:03 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RPN.hpp"
#include <string>
#include <stack>
#include <list>



int main(int argc, char** argv)
{
    if (argc == 2)
    {
        RPN my_RPN;
        try{
            my_RPN.RPN_Calc(argv[1]);
        }
        catch (const std::exception &e) {
            std::cerr << e.what();
        }
    }
    else
    {
        std::cerr << "Error:  Usage:./RPN 'numbers and operations'\n";
        return (1);
    }
    return (0);
}