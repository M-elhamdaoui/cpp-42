/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:48:40 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/18 14:04:44 by mel-hamd         ###   ########.fr       */
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
    // std::cout << level << " Before : ";
    // print(arr);
    // std::cout << std::endl;
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
    printPairNum(arr, n * 2, level + 1);
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
    if (s + n <= arr.size())
    {
         std::vector<int >a = std::vector<int>(arr.begin() + s , arr.begin() + s + n);
        pend_chain.push_back(a);
        s += n;
    }
    if (s < arr.size())
        rest = std::vector<int>(arr.begin() + s, arr.end());
    if (pend_chain.size() == 0 && main_chain.size() != 0){
        size_t index = 0;
        for(std::vector<std::vector<int> >::iterator it = main_chain.begin() ; it != main_chain.end(); it++)
        {
            std::copy(it->begin() , it->end(), arr.begin() + index);
            index += it->size();
        }
        if (rest.size())
        {
            std::copy(rest.begin() , rest.end(), arr.begin() + index);
        }
        return ;
    }
    // std::cout<< "Sequence : " << pend_chain.size() << "  ... ";
    // print(seq);
    std::cout << std::endl;
    // std::cout << "After : ";
    // print(arr);
    std::cout << std::endl;
    std::cout << "Main chain : ";
    print_multi(main_chain);
    // std::cout << std::endl;
    // std::cout << "Pen chain : ";
    // print_multi(pend_chain);
    // std::cout << std::endl;
    // std::cout << "Rest : ";
    // print(rest);
    // std::cout << std::endl;
    size_t lenth = 0;
    size_t i = 0;
    std::vector<size_t> seq = generate_jacob_sequence(pend_chain.size() + 1);
     std::cout << std::endl;
    std::cout << "----------------\nMain chain : ";
    print_multi(main_chain);
    std::cout << std::endl;
    std::cout << "----------------\nPend chain : ";
    print_multi(pend_chain);
    while (lenth != pend_chain.size())
    {
        size_t index = seq[i++];
        std::cout << index << std::endl;
        if (index - 2 >= pend_chain.size())
        {
            std::cout << "Skip " << index;
            continue;
        }
        binary_insert(index + lenth, main_chain, pend_chain[index - 2]);
        // std::cout << std::endl;
        // std::cout << "Main chain : ";
        // print_multi(main_chain);
        // std::cout << "Pend chain : ";
        // print_multi(pend_chain);

        lenth++;
    }
    main_chain.push_back(rest);
    size_t copy = 0;
    for (std::vector<std::vector<int> >::iterator it = main_chain.begin(); it != main_chain.end(); it++)
    {
        for (std::vector<int>::iterator t = it->begin(); t != it->end(); t++)
            arr[copy++] = *t;
    }
        
}

void binary_insert(size_t index, std::vector<std::vector<int> >& main_chain, std::vector<int> elem
) {

    size_t end = index;
    if (end > main_chain.size())
        end = main_chain.size();
    size_t start = 0;
    size_t mid = (end + start) / 2;
    while (start < end)
    {
        if (main_chain[mid].back() < elem.back())
            start = mid + 1;
        else
            end = mid;
        mid = (end + start) / 2;
    }
    main_chain.insert(main_chain.begin() + start, elem);
}

std::vector<int> sortVector(std::vector<int> arr) {
    // std::cout << "Before : ";
    // print(arr);
    // std::cout << std::endl;
    // generate_jacob_sequence(2);
    printPairNum(arr, 1, 1); 
    // std::cout << "After : ";
    // print(arr);
    // std::cout << std::endl;
    return (arr);
}

std::vector<size_t> generate_jacob_sequence(size_t number) {
    std::vector<size_t> seq;
    std::vector<size_t> res;
    seq.push_back(0);
    seq.push_back(1);
    seq.push_back(1);
    for (size_t i = 3; i <= number ; i++)
        seq.push_back(seq[i - 1] + (2 *seq[i - 2]));
    int prev =  0;
    for (std::vector<size_t>::iterator it = seq.begin(); it != seq.end(); it++)
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
    // print(res);
    return (res);
}