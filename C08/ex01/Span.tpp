/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:18:17 by obajja            #+#    #+#             */
/*   Updated: 2026/01/08 14:21:14 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

template <typename T>
void Span::addNumbers(T to_add)
{
    if ((this->_content.size() + std::distance(to_add.begin(), to_add.end())) > this->_size)
        throw SpanFullException();
    else
        this->_content.insert(_content.end(), to_add.begin(), to_add.end());
}