/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 16:35:16 by obajja            #+#    #+#             */
/*   Updated: 2026/01/07 15:17:00 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>

class Array{

  public:
    ~Array();
    Array();
    Array(unsigned int n);
    Array(Array const & src);
    Array & operator=(Array const & src);
    T & operator[](unsigned int index);
    const T & operator[](unsigned int index) const;

    unsigned int size();

  private:
    T* _content;
    unsigned int _size;
};

#include "Array.tpp"
