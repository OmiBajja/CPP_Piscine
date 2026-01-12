/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:36:26 by obajja            #+#    #+#             */
/*   Updated: 2026/01/08 22:59:41 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>{
    
    public:
        virtual ~MutantStack();
        MutantStack();
        MutantStack(MutantStack const & src);
        MutantStack & operator=(MutantStack const & src);

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        iterator begin();
        iterator end();

        const_iterator end() const;
        const_iterator begin() const;
        
    private:
    
};

#include"MutantStack.tpp"