/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:09:46 by obajja            #+#    #+#             */
/*   Updated: 2026/02/04 17:25:47 by obajja           ###   ########.fr       */
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

void list_printer(std::list<int> & to_print, std::string message)
{
    std::cout << message;
    std::list<int>::iterator it = to_print.begin();

    for (size_t i = 0; i < to_print.size(); i++)
       std::cout << *it++ << " ";
    std::cout << std::endl;
}

void PmergeMe::input_sanitizer(int argc, char** av)
{
    struct timeval start;
    struct timeval end;
    struct timeval start_list;
    struct timeval end_list;

    gettimeofday(&start, NULL);
    gettimeofday(&start_list, NULL);

    for (int i = 0; i < argc - 1; i++)
    {
        char *endptr;
        long num = strtol(av[i],&endptr, 10);
        if (( *endptr != '\0' || num < 0 || num > INT_MAX || num < INT_MIN))
            throw InvalidNumbersException();
        else
        {
            this->_unsorted.push_back(num);
            this->_unseasoned.push_back(num);
        }
    }

    _size = argc - 1;
    std::vector<int> sorted = vector_sorter(this->_unsorted);
    gettimeofday(&end, NULL);
    std::list<int> list_sorted = list_sorter(this->_unseasoned);
    gettimeofday(&end_list, NULL);

    double elapsed_time_vec = (end.tv_sec - start.tv_sec) * 1e6;
    elapsed_time_vec = (elapsed_time_vec + (end.tv_usec - start.tv_usec));
    double elapsed_time_lst = (end.tv_sec - start.tv_sec) * 1e6;
    elapsed_time_lst = (elapsed_time_lst + (end.tv_usec - start.tv_usec));
    vector_printer(_unsorted, "Before: ");
    vector_printer(sorted, "After: ");
    list_printer(_unseasoned, "Before: ");
    list_printer(list_sorted, "After: ");
    std::cout << "Time to process a range of " << _unsorted.size() << " elements with std::vector : " << std::fixed << std::setprecision(2) << elapsed_time_vec << " microseconds" << std::endl;
    std::cout << "Time to process a range of " << _unsorted.size() << " elements with std::list : " << std::fixed << std::setprecision(2) << elapsed_time_lst << " microseconds" << std::endl;

}

std::vector<int> PmergeMe::vector_sorter(std::vector<int> & to_sort)
{
    int lone = -1;
    if (to_sort.size() <= 1)
        return to_sort;

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
    return result;
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

std::list<int> PmergeMe::list_sorter(std::list<int> & to_sort)
{
    std::list<int>::iterator it = to_sort.begin();
    std::list<int>::iterator it2 = it++;

    int lone = -1;
    if (to_sort.size() <= 1)
        return to_sort;

    if (to_sort.size() % 2 != 0)
    {
        lone = to_sort.back();
        to_sort.pop_back();
    }

    std::list<int> major;
    std::list<int> minor;

    for (size_t i = 0; i < to_sort.size(); i += 2)
    {
        if (i == to_sort.size() - 1 && to_sort.size() % 2 != 0)
        {
            minor.splice(minor.end(), to_sort, to_sort.end());
        }
        else if ( *it <= *it2 )
        {
            minor.splice(minor.end(),to_sort, it);
            major.splice(minor.end(),to_sort, it2);
        }
        else if (*it > *it2)
        {
            minor.splice(minor.end(),to_sort, it2);
            major.splice(minor.end(),to_sort, it);
        }
        it++;
        it2++;
    }

    std::list<int> result;
    result = list_sorter(major);
    if (lone != -1)
        minor.push_back(lone);
    std::list<int>jacobsNum = list_Jacobsthal_fill(minor.size());
    list_min_insertion(result, minor, jacobsNum);
    return result;
}

std::list<int> list_Jacobsthal_fill(int len)
{
    std::list<int>result;
    int num = 0;
    result.push_back(0);
    result.push_back(1);
    
    int first = 0;
    int second = 1;

    for (int i = 2; i < len; i++)
    {
        num = second + 2 * first;
        if (num > len)
            break;
        result.push_back(second + 2 * first);
        first = second;
        second = num;
    }

    return (result);
}

int list_binary_search(std::list<int>& major, int to_insert)
{
    int start = 0;
    int end = major.size();
    std::list<int>::iterator it = major.begin();
    
    while (start < end)
    {
        int mid = (start + end) / 2;
        std::advance(it, mid);
        if (to_insert < *it)
            end = mid;
        else
            start = mid + 1;
    }

    return (start);
}
void list_insert(std::list<int>& major, int to_insert, int position)
{
    std::list<int>::iterator it = major.begin();
    std::advance(it, position);
    major.insert(it, to_insert);
}
void    list_min_insertion(std::list<int> &major, std::list<int> &minor, std::list<int> &jacobsNum)
{
    std::list<int>::iterator it = minor.begin();
    std::list<int>::iterator loop = jacobsNum.begin();
    std::advance(loop, 1);

    for (size_t i = 2; i < jacobsNum.size(); i++)
    {
        if (static_cast<size_t>(*loop) <= minor.size() - 1)
        {
            for (int j = *loop; j > *loop; j--)
            {
                it = minor.begin();
                std::advance(loop, 1);
                std::advance(it, j);
                int to_insert = *it;
                int position = list_binary_search(major, to_insert);
                list_insert(major, to_insert, position);
                it = minor.erase(it);
            }
        }
    }

    if (!minor.empty())
    {
        for (int i = minor.size() - 1; i >= 0; i--)
        {
            it = minor.begin();
            std::advance(it, i);
            int to_insert = *it;
            int position = list_binary_search(major, to_insert);
            list_insert(major, to_insert, position);
            it = minor.erase(it);
        }
    }
}