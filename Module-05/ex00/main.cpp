/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:43:56 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/23 07:08:40 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main() {

	try {
			Bureaucrat b1("One", 1);
			Bureaucrat b2("Two", 150);
			// Bureaucrat b2("Two", 161);
			// Bureaucrat b2("Two", 0);
			// Bureaucrat b2("Two", -0);

			b2.incrementGrade();
			std::cout << b1 << std::endl;
			std::cout << b2 << std::endl;
			b1.incrementGrade();
			b2.decrementGrade();
			b1.decrementGrade();
			b2.incrementGrade();	
			std::cout << b1 << std::endl;
			std::cout << b2 << std::endl;
	}
	catch (const std::exception& ex) 
	{
		std::cout << ex.what() << std::endl;
	}
	return (0);

}