/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:09:46 by obajja            #+#    #+#             */
/*   Updated: 2026/02/05 17:30:22 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <bits/stdc++.h>
#include <sys/time.h>
#include <iterator>

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

void vector_printer(std::vector<int> & to_print, std::string message)
{
    std::cout << message;
    for (size_t i = 0; i < to_print.size(); i++)
       std::cout << to_print[i] << " ";
    std::cout << std::endl;
}

void deque_printer(std::deque<int> & to_print, std::string message)
{
    std::cout << message;
    std::deque<int>::iterator it = to_print.begin();

    for (size_t i = 0; i < to_print.size(); i++)
       std::cout << *it++ << " ";
    std::cout << std::endl;
}

void PmergeMe::input_sanitizer(int argc, char** av)
{
    struct timeval start;
    struct timeval end;

    gettimeofday(&start, NULL);

    for (int i = 1; i < argc; i++)
    {
        char *endptr;
        long num = strtol(av[i],&endptr, 10);
        if (( *endptr != '\0' || num < 0 || num > INT_MAX ))
            throw InvalidNumbersException();
        else
            this->_unsorted.push_back(num);
    }

    _size = argc - 1;
    vector_printer(_unsorted, "\nBefore: ");
    std::vector<int> sorted = vector_sorter(this->_unsorted);
    gettimeofday(&end, NULL);

    double elapsed_time_vec = (end.tv_sec - start.tv_sec) * 1000000;
    elapsed_time_vec = (elapsed_time_vec + (end.tv_usec - start.tv_usec));
    vector_printer(sorted, "After: ");
    std::cout << "\nTime to process a range of " << _unsorted.size() << " elements with std::vector : " << elapsed_time_vec << " microseconds" << std::endl;
}

void PmergeMe::dq_input_sanitizer(int argc, char** av)
{
    struct timeval start_deque;
    struct timeval end_deque;

    gettimeofday(&start_deque, NULL);

    for (int i = 1; i < argc; i++)
    {
        char *endptr;
        long num = strtol(av[i],&endptr, 10);
        if (( *endptr != '\0' || num < 0 || num > INT_MAX || num < INT_MIN))
            throw InvalidNumbersException();
        else
            this->_unseasoned.push_back(num);
    }

    _size = argc - 1;
    // deque_printer(_unseasoned, "\nBefore: ");
    std::deque<int> deque_sorted = deque_sorter(this->_unseasoned);
    gettimeofday(&end_deque, NULL);

    double elapsed_time_dq = (end_deque.tv_sec - start_deque.tv_sec) * 1000000;
    elapsed_time_dq = (elapsed_time_dq + (end_deque.tv_usec - start_deque.tv_usec));
    //deque_printer(deque_sorted, "After: ");
    std::cout << "\nTime to process a range of " << _unsorted.size() << " elements with std::deque : " << elapsed_time_dq << " microseconds" << std::endl;

}

std::vector<int> PmergeMe::vector_sorter(std::vector<int> & to_sort)
{
    int lone = -1;
    if (to_sort.size() <= 1)
        return  (to_sort);

    if (to_sort.size() % 2 != 0)
    {
        lone = to_sort[to_sort.size() - 1];
        to_sort.pop_back();
    }

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

    std::vector<int> result;
    result = vector_sorter(major);
    if (lone != -1)
        minor.push_back(lone);
    std::vector<int>jacobsNum = Jacobsthal_fill(minor.size());
    min_insertion(result, minor, jacobsNum);
    return (result);
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
        for (int i = minor.size() - 1; i >= 0; i--)
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

std::deque<int> PmergeMe::deque_sorter(std::deque<int> & to_sort)
{
    int lone = -1;
    if (to_sort.size() <= 1)
        return  (to_sort);

    if (to_sort.size() % 2 != 0)
    {
        lone = to_sort[to_sort.size() - 1];
        to_sort.pop_back();
    }

    std::deque<int> major;
    std::deque<int> minor;

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

    std::deque<int> result;
    result = deque_sorter(major);
    if (lone != -1)
        minor.push_back(lone);
    std::deque<int>jacobsNum = deque_Jacobsthal_fill(minor.size());
    deque_min_insertion(result, minor, jacobsNum);
    return (result);
}

std::deque<int> deque_Jacobsthal_fill(int len)
{
    std::deque<int>result;
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

int deque_binary_search(std::deque<int>& major, int to_insert)
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
void deque_insert(std::deque<int>& major, int to_insert, int position)
{
    std::deque<int>::iterator it = major.begin();
    std::advance(it, position);
    major.insert(it, to_insert);
}
void    deque_min_insertion(std::deque<int> &major, std::deque<int> &minor, std::deque<int> &jacobsNum)
{
    for (size_t i = 2; i < jacobsNum.size(); i++)
    {
        if (static_cast<size_t>(jacobsNum[i] - 1) <= minor.size() - 1)
        {
            for (int j = jacobsNum[i] - 1; j > jacobsNum[i - 1]; j--)
            {
                int to_insert = minor[j];
                int position = deque_binary_search(major, to_insert);
                deque_insert(major, to_insert, position);
                minor.erase(minor.begin()+j);
            }
        }
    }

    if (!minor.empty())
    {
        for (int i = minor.size() - 1; i >= 0; i--)
        {
            int to_insert = minor[i];
            int position = deque_binary_search(major, to_insert);
            deque_insert(major, to_insert, position);
            minor.erase(minor.begin()+i);
        }
    }
}