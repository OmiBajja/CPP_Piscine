/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:09:46 by obajja            #+#    #+#             */
/*   Updated: 2026/01/16 14:53:18 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(PmergeMe const & src): _unsorted(src._unsorted), _sorting(src._sorting){}

PmergeMe & PmergeMe::operator=(PmergeMe const & src)
{
    if (this != &src)
    {
        _unsorted = src._unsorted;
        _sorting = src._sorting;
    }
    return (*this);
}

PmergeMe::~PmergeMe(){}

void PmergeMe::input_sanitizer(int argc, char** av)
{
    for (int i = 0; i < argc - 1; i++)
    {
        char *endptr;
        long num = strtol(av[i],&endptr, 10);
        if (( *endptr != '\0' || num < 0 || num > INT_MAX || num < INT_MIN))
            throw InvalidNumbersException();
        else
        {
            this->_unsorted.push_back(num);
        }
    }

    _size = argc - 1;
    
    vector_sorter(this->_unsorted);
}

void PmergeMe::vector_sorter(std::vector<int> & to_sort)
{
    //time management here

    if (to_sort.size() <= 1)
        return;

    std::vector<int> major;
    std::vector<int> minor;

    for (size_t i = 0; i < to_sort.size(); i += 2)
    {
        if (i == to_sort.size() - 1 && to_sort.size() % 2 != 0)
        {
            minor.push_back(to_sort[to_sort.size() - 1]);
        }
        else if ( to_sort[i] <= to_sort[i + 1] )
        {
            minor.push_back(to_sort[i]);
            major.push_back(to_sort[i + 1]);
        }
        else if (to_sort[i] > to_sort[i + 1])
        {
            minor.push_back(to_sort[i + 1]);
            major.push_back(to_sort[i]);
        }
    }

    vector_sorter(major);
    
    std::vector<int>jacobsNum = Jacobsthal_fill(minor.size());
    min_insertion(major, minor, jacobsNum);

}

void    min_insertion(std::vector<int> &major, std::vector<int> &minor, std::vector<int> &jacobsNum)
{

    for (size_t i = 2; i < jacobsNum.size(); i++)
    {
        if (static_cast<size_t>(jacobsNum[i] - 1) <= minor.size() - 1)
        {
            for (int j = jacobsNum[i] - 1; j > jacobsNum[i - 1]; j--)
            {
                int to_insert = minor[j];
                int position = binary_search(major, to_insert);
                vector_insert(major, to_insert, position);
                minor.erase(minor.begin()+j);
            }
        }
    }

    if (!minor.empty())
    {
        for (size_t i = minor.size() - 1; i > 0; i--)
        {
            int to_insert = minor[i];
            int position = binary_search(major, to_insert);
            vector_insert(major, to_insert, position);
            minor.erase(minor.begin()+i);
        }
    }
}

int binary_search(std::vector<int>& major, int to_insert)
{
    int start = 0;
    int end = major.size();

    while (start < end)
    {
        int mid = (start + end) / 2;
        if (to_insert < major[mid])
            end = mid;
        else
            start = mid + 1;
    }

    return (start);
}

void vector_insert(std::vector<int>& major, int to_insert, int position)
{
    major.insert(major.begin() + position, to_insert);
}


std::vector<int> Jacobsthal_fill(int len)
{
    std::vector<int>result;
    int num = 0;
    result.push_back(0);
    result.push_back(1);
    
    for (int i = 2; i < len; i++)
    {
        num = result[i - 1] + 2 * result[i - 2];
        if (num > len)
            break;
        result.push_back(result[i - 1] + 2 * result[i - 2]);
    }

    return (result);
}