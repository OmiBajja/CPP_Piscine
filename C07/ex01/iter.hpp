/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:52:05 by obajja            #+#    #+#             */
/*   Updated: 2026/01/06 15:02:17 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename P>
void printer(P const & to_print)
{
    std::cout << to_print << std::endl;
}

template <typename T>

void iter(T *array, const size_t lenght, void(*f)(T const &))
{
    for (size_t i = 0; i < lenght; i++)
        f(array[i]);
}