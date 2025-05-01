/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 08:58:36 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/01 11:16:46 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"

template <typename T> 
void printing(T& a) {
	std::cout << a << std::endl;
}

template <typename T> 
void increment(T& a) {
	a++;
}


int main() {

	int arr[] = {1, 2 , 3 , 4 , 5};
	iter(arr, 5, printing<int>);
	iter(arr, 5, increment<int>);

	std::cout << "--------" << std::endl;
	iter(arr, 5, printing<int>);
	return (0);
}