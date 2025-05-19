/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:48:35 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/19 07:00:44 by mel-hamd         ###   ########.fr       */
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
        sortVector(vec);
        sortDeque(deq);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}