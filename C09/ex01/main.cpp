/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:51:45 by obajja            #+#    #+#             */
/*   Updated: 2026/01/14 02:58:01 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RPN.hpp"
#include <string>
#include <stack>
#include <list>

int operation_handler(int a, int z, char op)
{
    if (op == '-')
        return (a - z);
    else if (op == '+')
        return (a + z);
    else if (op == '*')
        return (a * z);
    else
        return (a / z);
}

void RPN (std::string toCalculate)
{
    std::stack<int, std::list<int> > calculatrice;
    for (size_t i = 0; i < toCalculate.size(); i++)
    {
        if (isdigit(toCalculate[i]))
        {
            calculatrice.push(toCalculate[i] - 48);
        }
        else if (toCalculate[i] == '-' || toCalculate[i] == '+' 
            || toCalculate[i] == '*' || toCalculate[i] == '/' || toCalculate[i] == ' ')
        {
            if ( toCalculate[i] == ' ')
                continue;
            else if (calculatrice.size() >= 2)
            {
                int z = calculatrice.top();
                calculatrice.pop();
                int a = calculatrice.top();
                calculatrice.pop();
                calculatrice.push(operation_handler(a,z,toCalculate[i]));
            }
        }
        else
        {
            std::cerr << "Error\n";
            return;
        }
    }
    
    if (calculatrice.size() == 1)
        std::cout << calculatrice.top() << std::endl;
    else
        std::cout << "Error with calculations\n";
}

int main(int argc, char** argv)
{
    if (argc == 2)
    {
        RPN(argv[1]);    
    }
    else
    {
        std::cerr << "Error:  Usage:./RPN 'numbers and operations'\n";
        return (1);
    }
    return (0);
}