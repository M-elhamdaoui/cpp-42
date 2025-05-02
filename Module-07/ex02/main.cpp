/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:51:12 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/02 15:26:32 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Array.hpp"

int main() {

	Array<int> a(10);
	Array<char> b(10);
	try {
		for (int i = 0 ; i < 10 ; i++)
			a[i] = i + 1;
		for (int i = 0 ; i < 10 ; i++)
			b[i] = 'A' + i;
		std::cout << "Values in first array : " <<std::endl;
		for (int i = 0 ; i < 10 ; i++)
			std::cout <<  a[i] <<std::endl;
		std::cout << "Values in second array : " <<std::endl;
		for (int i = 0 ; i < 10 ; i++)
			std::cout <<  b[i] <<std::endl;
		std::cout << "Try to access invalid position : " << std::endl;
		a[11];
		
	}
	catch (const std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
    return (0);
}