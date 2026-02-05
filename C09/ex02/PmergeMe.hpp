/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:12:27 by obajja            #+#    #+#             */
/*   Updated: 2026/02/05 14:28:50 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <deque>
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
        void dq_input_sanitizer(int argc, char** av);
        std::vector<int> vector_sorter(std::vector<int> & to_sort);
        std::deque<int> deque_sorter(std::deque<int> & to_sort);


    private:
        std::vector<int>    _unsorted;
        std::deque<int>      _unseasoned;
        std::vector<int>    _sorting;
        int                 _size;
};

std::vector<int> Jacobsthal_fill(int len);
int     binary_search(std::vector<int>& major, int to_insert);
void    vector_insert(std::vector<int>& major, int to_insert, int position);
void    min_insertion(std::vector<int> &major, std::vector<int> &minor, std::vector<int> &jacobsNum);

std::deque<int> deque_Jacobsthal_fill(int len);
int     deque_binary_search(std::deque<int>& major, int to_insert);
void    deque_insert(std::deque<int>& major, int to_insert, int position);
void    deque_min_insertion(std::deque<int> &major, std::deque<int> &minor, std::deque<int> &jacobsNum);