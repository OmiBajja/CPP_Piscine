/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:12:27 by obajja            #+#    #+#             */
/*   Updated: 2026/02/04 17:13:45 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <list>
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
        std::vector<int> vector_sorter(std::vector<int> & to_sort);
        std::list<int> list_sorter(std::list<int> & to_sort);


    private:
        std::vector<int>    _unsorted;
        std::list<int>      _unseasoned;
        std::vector<int>    _sorting;
        int                 _size;
};

std::vector<int> Jacobsthal_fill(int len);
int     binary_search(std::vector<int>& major, int to_insert);
void    vector_insert(std::vector<int>& major, int to_insert, int position);
void    min_insertion(std::vector<int> &major, std::vector<int> &minor, std::vector<int> &jacobsNum);

std::list<int> list_Jacobsthal_fill(int len);
int     list_binary_search(std::list<int>& major, int to_insert);
void    list_insert(std::list<int>& major, int to_insert, int position);
void    list_min_insertion(std::list<int> &major, std::list<int> &minor, std::list<int> &jacobsNum);