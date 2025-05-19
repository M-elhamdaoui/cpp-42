/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:48:35 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/19 09:49:34 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char** av) {
    std::vector<int> vec;
    std::deque<int> deq;
    
    if (ac == 1)
        return (std::cerr << "ERROR" <<std::endl, 1);
    try
    {
        fill(vec, deq, av, ac);
        clock_t startVector = clock();
        vec = sortVector(vec);
        clock_t endVector = clock();
        std::cout << "Before : ";
        print(deq);
        std::cout << std::endl;
        clock_t startDeque = clock();
        deq = sortDeque(deq);
        clock_t endDeque = clock();
        std::cout << "After  : ";
        print(deq);
        std::cout << std::endl;
        double timeVec = static_cast<double>(endVector - startVector) / CLOCKS_PER_SEC * 1000;
        double timeDeq = static_cast<double>(endDeque - startDeque) / CLOCKS_PER_SEC * 1000;
        std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << timeVec << " ms" << std::endl;
        std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << timeDeq << " ms" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}