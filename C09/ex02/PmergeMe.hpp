/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:12:27 by obajja            #+#    #+#             */
/*   Updated: 2026/01/16 10:50:54 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <cstdlib>
#include <iostream>
#include <limits.h>
#include <stdexcept>
#include <iterator>


class PmergeMe{

    public:
        PmergeMe();
        PmergeMe(PmergeMe const & src);
        PmergeMe & operator=(PmergeMe const & src);
        ~PmergeMe();

        class InvalidNumbersException: public std::exception{
            
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: an Invalid number used.\nPlease use only positive integers.\n");
                }
        };
        
        void input_sanitizer(int argc, char** av);
        void vector_sorter(std::vector<int> & to_sort);

    private:
        std::vector<int>    _unsorted;
        std::vector<int>    _sorting;
        int                 _size;
};

std::vector<int> Jacobsthal_fill(int len);
int binary_search(std::vector<int>& major, int to_insert);
void vector_insert(std::vector<int>& major, int to_insert, int position);
void    min_insertion(std::vector<int> &major, std::vector<int> &minor, std::vector<int> &jacobsNum);