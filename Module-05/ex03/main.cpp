/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:43:56 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/24 12:43:02 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main() {

	try {
			Bureaucrat b1("One", 1);
			Bureaucrat b2("Two", 100);
			RobotomyRequestForm roboto("Home");
			PresidentialPardonForm president("school");
			ShrubberyCreationForm shrubbery("street");

			b1.executeForm(roboto);
			b1.signForm(roboto);
			b1.signForm(shrubbery);
			b1.executeForm(roboto);
			b1.executeForm(president);
			b1.executeForm(shrubbery);

			b2.executeForm(roboto);
			b2.executeForm(president);
			b2.executeForm(shrubbery);

	}
	catch (const std::exception& ex) 
	{
		std::cout << ex.what() << std::endl;
	}
	return (0);

}