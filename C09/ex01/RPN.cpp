/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 00:49:04 by obajja            #+#    #+#             */
/*   Updated: 2026/01/14 15:16:06 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(): _stack()
{}

RPN::RPN(RPN const & src ): _stack(src._stack)
{}

RPN & RPN::operator=(RPN const & src)
{
    if (this != &src)
        _stack = src._stack;
    return (*this);
}

void RPN::RPN_Calc (std::string toCalculate)
{
    for (size_t i = 0; i < toCalculate.size(); i++)
    {
        if (isdigit(toCalculate[i]))
        {
            _stack.push(toCalculate[i] - 48);
        }
        else if (toCalculate[i] == '-' || toCalculate[i] == '+' 
            || toCalculate[i] == '*' || toCalculate[i] == '/' || toCalculate[i] == ' ')
        {
            if ( toCalculate[i] == ' ')
                continue;
            else if (_stack.size() >= 2)
            {
                int z = _stack.top();
                _stack.pop();
                int a = _stack.top();
                _stack.pop();
                _stack.push(operation_handler(a,z,toCalculate[i]));
            }
        }
        else
        {
            std::cerr << "Error\n";
            return;
        }
    }
    
    if (_stack.size() == 1)
        std::cout << _stack.top() << std::endl;
    else
        std::cout << "Error with calculations\n";
}

RPN::~RPN(){}

int operation_handler(int a, int z, char op)
{
    if (op == '-')
        return (a - z);
    else if (op == '+')
        return (a + z);
    else if (op == '*')
        return (a * z);
    else
    {    
        if (z == 0)
            throw RPN::DivZeroException();
        else
            return (a / z);
    }
}