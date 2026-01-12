/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:33:45 by obajja            #+#    #+#             */
/*   Updated: 2026/01/06 14:41:57 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>

void swap(T &a, T &b)
{
    T temp;
    
    temp = a;
    a = b;
    b = temp;
}

template <typename T>

T max(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

template <typename T>

T min(T a, T b)
{
    if (a < b)
        return a;
    else
        return b;
}