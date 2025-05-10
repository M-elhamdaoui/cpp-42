/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:32:22 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/10 05:51:14 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    std::vector<int> arr;
    std::list<int> arr1;
    
    for (int i = 0 ; i < 10 ; i++)
    {
        arr.push_back(i + 1);
        arr1.push_back(i + 10);
    }
    try {
        int found = easyfind(arr, 7);
        std::cout << found << std::endl;
        found = easyfind(arr1, 1);
        std::cout << found << std::endl;
    } catch (const std::exception& ex ) {
        std::cout << ex.what() << std::endl;
    }

    return (0);
}