/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:48:43 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/19 07:56:14 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <vector>
#include <iostream>
#include <limits>
#include <algorithm> 
#include <ctime>


template <typename T>
void print(const T& arr) {
    size_t i = 0;
    
    while(i < arr.size())
    {
        std::cout << arr[i];
        if (i != arr.size() - 1)
            std::cout << ", ";
        i++;
    }
}

template <typename T>
void print_multi(const T& arr) {
    size_t i = 0;
    
    while(i < arr.size())
    {
        print(arr[i]);
        if (i != arr.size() - 1)
            std::cout << " | ";
        else
            std::cout << std::endl;
        i++;
    }
    std::cout << std::endl;
}

template <typename T>
T generate_jacob_sequence(size_t number) {
    T seq;
    T res;
    seq.push_back(0);
    seq.push_back(1);
    seq.push_back(1);
    for (size_t i = 3; i <= number ; i++)
        seq.push_back(seq[i - 1] + (2 *seq[i - 2]));
    int prev =  0;
    for ( typename T::iterator it = seq.begin(); it != seq.end(); it++)
    {
        if (*it != 1 && *it != 0)
        {
            for (int s = *it; s != prev ; s--)
                 res.push_back(s);
        }
        if (res.size() > number)
            break;
        prev = *it;
    }
    if (number == 1 || number == 2)
        res.push_back(1);
    return (res);
}

void binary_insert(size_t index, std::vector<std::vector<int> >& main_chain, std::vector<int> elem);
std::vector<size_t> generate_jacob_sequence(size_t number);
bool check_valid(char *str);
void fill(std::vector<int>& vec, std::deque<int>& deq, char** av, int& ac);
std::vector<std::pair<int, int> > generatePairs(std::vector<int> arr);
std::vector<int> sortVector(std::vector<int> arr);
void sortNums(std::vector<int>& arr, size_t n, int level);

void binary_insert(size_t index, std::deque<std::deque<int> >& main_chain, std::deque<int> elem);
std::vector<std::pair<int, int> > generatePairs(std::deque<int> arr);
std::deque<int> sortDeque(std::deque<int> arr);
void sortNums(std::deque<int>& arr, size_t n, int level);