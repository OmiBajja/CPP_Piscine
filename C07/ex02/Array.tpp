/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 16:52:32 by obajja            #+#    #+#             */
/*   Updated: 2026/01/07 15:17:05 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

template <typename T>
Array<T>::Array(): _content(NULL), _size(0)
{
}
template <typename T>
Array<T>::Array(unsigned int n): _content(new T[n]()), _size(n)
{
    
}

template <typename T>
Array<T>::Array(Array const & src): _size(src._size)
{
    this->_content = new T[src._size]();
    for (unsigned int i = 0; i < this->size(); i++)
        this->_content[i] = src._content[i]; 
}

template <typename T>
Array<T> & Array<T>::operator=(Array const & src)
{
    if (this->_content != src._content)
    {
        delete[] this->_content;
        this->_size = src._size;
        this->_content = new T[src._size]();
        for (unsigned int i = 0; i < this->size(); i++)
            this->_content[i] = src._content[i]; 
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete [] _content;
}
template <typename T>
unsigned int Array<T>::size()
{
    return(this->_size);
}

template <typename T>
T & Array<T>::operator[](unsigned int index)
{
    if (index >= this->_size || this->_content == NULL)
            throw std::out_of_range("Index out of bounds");
    return(this->_content[index]);
}

template <typename T>
const T & Array<T>::operator[](unsigned int index) const
{
    if (index >= this->_size || this->_content == NULL)
            throw std::out_of_range("Index out of bounds");
    return(this->_content[index]);
}