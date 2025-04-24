/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:43:56 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/24 06:36:19 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main() {

	try {
			Bureaucrat b1("One", 1);
			Bureaucrat b2("Two", 150);
			AForm form("form-1",50 , 100);
			// Bureaucrat b2("Two", 161);
			// Bureaucrat b2("Two", 0);
			// Bureaucrat b2("Two", -0);

			b2.incrementGrade();
			std::cout << b1 << std::endl;
			std::cout << b2 << std::endl;
			std::cout  << form << std::endl;
			// b1.increment();
			// b2.decrement();
			b1.decrementGrade();
			b2.incrementGrade();	
			b1.signForm(form);
			b2.signForm(form);

			std::cout  << form << std::endl;
			std::cout << b1 << std::endl;
			std::cout << b2 << std::endl;
	}
	catch (const std::exception& ex) 
	{
		std::cout << ex.what() << std::endl;
	}
	return (0);

}