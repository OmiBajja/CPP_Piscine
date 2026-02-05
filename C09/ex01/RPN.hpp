/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 00:49:08 by obajja            #+#    #+#             */
/*   Updated: 2026/01/14 15:14:49 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <list>

class RPN {
  
    public:
        RPN();
        RPN(RPN const & src );
        ~RPN();
        RPN & operator=(RPN const & src);
        void RPN_Calc (std::string toCalculate);
        class DivZeroException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: Division by zero\n");
                };
        };

    private:
        std::stack<int, std::list<int> > _stack;
};

int operation_handler(int a, int z, char op);