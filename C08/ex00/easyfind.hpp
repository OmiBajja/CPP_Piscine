/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 16:35:16 by obajja            #+#    #+#             */
/*   Updated: 2026/01/07 20:26:17 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>

template <typename T>

typename T::const_iterator easyfind(T const &arr, int to_find)
{
  typename T::const_iterator i = std::find(arr.begin(), arr.end(), to_find);
  if (i != arr.end())
    return (i);
  else
    throw std::out_of_range("Val not found");
  
}
