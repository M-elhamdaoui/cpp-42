/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:48:43 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/16 09:56:24 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <vector>
#include <iostream>
#include <limits>


template <typename T>
void print(const T& arr) {
    size_t i = 0;
    
    while(i < arr.size())
    {
        std::cout << arr[i];
        if (i != arr.size() - 1)
            std::cout << ", ";
        else
            std::cout << std::endl;
        i++;
    }
}

bool check_valid(char *str);
void fill(std::vector<int>& vec, std::deque<int>& deq, char** av, int& ac);
void check_input_valid(char**& av,int ac);
std::vector<std::pair<int, int> > generatePairs(std::vector<int> arr);
std::vector<int> sortVector(std::vector<int> arr);