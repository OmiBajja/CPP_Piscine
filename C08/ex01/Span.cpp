/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 00:40:38 by obajja            #+#    #+#             */
/*   Updated: 2026/01/08 14:51:36 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>


Span::Span(unsigned int N): _content(), _size(N)
{
    this->_content.reserve(N);
}
Span::Span(Span const & src): _content(src._content), _size(src._size)
{
}

Span & Span::operator=( Span const & src)
{
    if (this != &src)
    {
        this->_size = src._size;
        this->_content = src._content;
    }
    return (*this);
}

Span::~Span()
{
    
}
void Span::addNumber(int to_add)
{
    if ((this->_content.size() + 1) > this->_size)
        throw SpanFullException();
    else
        this->_content.push_back(to_add);
}

int Span::shortestSpan()
{
    if (this->_content.size() < 2)
        throw NoSpanFoundException();

    std::vector<int> copy = this->_content;
    std::sort(copy.begin(), copy.end());
    
    unsigned int i = 0;
    int min_span = copy[i + 1] - copy[i];
    while(++i < copy.size() - 1)
    {
        if (copy[i + 1] - copy[i] < min_span)
            min_span = copy[i + 1] - copy[i];
    }
    return (min_span);
}
int Span::longestSpan()
{
    if (this->_content.size() < 2)
        throw NoSpanFoundException();

    std::vector<int> copy = this->_content;
    std::sort(copy.begin(), copy.end());
    
    return (copy[copy.size() - 1] - copy[0]);
}