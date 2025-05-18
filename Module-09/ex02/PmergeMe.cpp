/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:48:40 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/18 09:13:31 by mel-hamd         ###   ########.fr       */
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

void printPairNum(std::vector<int>& arr, size_t n, int level) {
    if (n * 2 > arr.size() && n != 2)
        return ;
    if (n == 2 && arr.size() < 2)
        return ;
    size_t s = 0;
    std::vector<std::vector<int> > main_chain;
    std::vector<std::vector<int> > pend_chain;
    std::vector<std::vector<int> > resualt_chain;
    std::vector<int> rest;
    std::cout << level << " Before : ";
    print(arr);
    std::cout << std::endl;
    while (s + (2 * n) <= arr.size())
    {
        std::vector<int> a(arr.begin() + s , arr.begin() + s + n);
        std::vector<int> b(arr.begin() + s + n , arr.begin() + s + (n * 2));
        if (a.back() > b.back())
        {
            for (size_t j = 0; j < b.size(); j++)
            {
                arr[s + j] = b[j];
                arr[s + n + j] = a[j];
            }
        }
        s+= n * 2;
    }
    // std::cout  << level << " After : ";
    // print(arr);
    // std::cout << std::endl;
    // printPairNum(arr, n * 2, level + 1);
    // std::cout << level <<  " number of number in each pair : " << n <<std::endl;
    s = 0;
    while (s + (2 * n) <= arr.size())
    {
        std::vector<int >a = std::vector<int>(arr.begin() + s , arr.begin() + s + n);
        std::vector<int> b = std::vector<int>(arr.begin() + s + n , arr.begin() + s + (n * 2));
        if (s == 0)
            main_chain.push_back(a);
        else
            pend_chain.push_back(a);
        main_chain.push_back(b);
        s += n * 2;
    }
    if (s < arr.size())
        rest = std::vector<int>(arr.begin() + s, arr.end());
    // std::cout << "After : ";
    // print(arr);
    // std::cout << std::endl;
    // std::cout << "Main chain : ";
    // print_multi(main_chain);
    // std::cout << "Pen chain : ";
    // print_multi(pend_chain);
    // std::cout << "Rest : ";
    // print(rest);
    // std::cout << std::endl;
    if (pend_chain.size() == 0 && main_chain.size() != 0){
        size_t index = 0;
        for(std::vector<std::vector<int> >::iterator it = main_chain.begin() ; it != main_chain.end(); it++)
        {
            //here segv
            std::copy(it->begin() , it->end(), arr.begin() + index);
            index += it->size();
        }
        if (rest.size())
        {
            std::copy(rest.begin() , rest.end(), arr.begin() + index);
        }
        return ;
    }
    // if (pend_chain.size() == 0)
        
}

std::vector<int> sortVector(std::vector<int> arr) {
    // std::cout << "Before : ";
    // print(arr);
    // std::cout << std::endl;
    printPairNum(arr, 1, 1);
    // std::cout << "After : ";
    // print(arr);
    // std::cout << std::endl;
    return (arr);
}