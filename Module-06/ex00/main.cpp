/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:32:41 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/29 16:42:46 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char** av) {

    if (ac == 2) {
        ScalarConverter::convert(av[1]);
    }
	else
		std::cout << "Invalid number of args " << std::endl;        
    return (0);
}