/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:36:19 by obajja            #+#    #+#             */
/*   Updated: 2026/01/08 23:15:31 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::~MutantStack()
{ 
}
template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{   
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & src): std::stack<T>(src)
{   
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack<T> const & src)
{
    if (this != &src)
        std::stack<T>::operator=(src);
    return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (this->c.begin());
}
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return (this->c.begin());
}
template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return (this->c.end());
}