/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:48:40 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/17 06:47:31 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"





bool check_valid(char *str) {
    std::string test(str);

    if (test.find_first_not_of("+1234567890") != std::string::npos)
        return (1);
    if (test.size() > 1 && (test.find('+') != std::string::npos && test.find_last_of('+') != 0))
        return (1);
    if (test.size() == 0)
        return (1);
    if (test.size()  == 1 && test == "+")
        return (1);
    std::string check  = "-1";
    if (test.find_first_not_of("+0") != std::string::npos)
        std::string check = test.substr(test.find_first_not_of("+0"), std::distance(test.begin() + test.find_first_not_of("+0"), test.end()));
    if (check != "-1" && check.size() > 12)
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
        if (res > std::numeric_limits<int>::max())
            throw std::logic_error("Invalid Argument !");
        vec.push_back(res);
        deq.push_back(res);
        i++;
    }
}

void printPairNum(std::vector<int> arr, size_t n, int level) {
    if (n > (arr.size() / 2) && n != 2)
        return ;
    if (n == 2 && arr.size() < 2)
        return ;
    size_t s = 0;
    while (s + n - 1 < arr.size())
    {
        std::vector<int> a(arr.begin() + s , arr.begin() + s + n / 2);
        std::vector<int> b(arr.begin() + s + n / 2 , arr.begin() + s + n);
        std::cout << "a : " ;
        print(a);
        std::cout << "b : " ;
        print(b);
        s+=n;
    }
    std::cout << level <<  " number of number in each pair : " << n <<std::endl;
    printPairNum(arr, n * 2, level + 1);
}

std::vector<int> sortVector(std::vector<int> arr) {
    printPairNum(arr, 2, 1);
    return (arr);
}