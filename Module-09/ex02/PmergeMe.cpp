/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:48:40 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/15 17:40:39 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


bool check_valid(char *str) {
    std::string test(str);

    if (test.find_first_not_of("+1234567890") != std::string::npos)
        return (1);
    if (test.size() > 12)
        return (1);
    if (test.size() > 1 && (test.find('+') != std::string::npos && test.find('+') != 0))
        return (1);
    return (0);
}

void fill(std::vector<int>& vec, std::deque<int>& deq, char** av, int& ac) {
    int i = 1;
    long res = 0;
    while (i < ac ) {
        if (check_valid(av[i]))
            throw std::logic_error("Invalid Argument !");
        res = std::strtol(av[i],NULL, 10);
        vec.push_back(res);
        deq.push_back(res);
        i++;
    }
}

std::vector<int> sortVector(std::vector<int> arr) {
    for(std::vector<int>::iterator it; it != arr.end(); it++) {
        std::cout << *it << std::endl;
    }
}