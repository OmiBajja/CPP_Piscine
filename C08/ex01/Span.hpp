/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 00:38:07 by obajja            #+#    #+#             */
/*   Updated: 2026/01/08 14:44:16 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <stdexcept>

class Span{

    public:
        ~Span();
        Span(unsigned int N);
        Span(Span const & src);
        Span & operator=( Span const & src);
        template <typename T>
        void addNumbers(T to_add);
        void addNumber(int to_add);
        int shortestSpan();
        int longestSpan();

        class SpanFullException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("It's full already");
                };
        };

        class NoSpanFoundException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("No Spans available");
                };
        };

    private:
        std::vector<int>_content;
        unsigned int _size;
    
};

#include "Span.tpp"