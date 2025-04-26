/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:43:56 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/26 09:37:08 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {

	AForm* roboto;

	try {
			Intern intern;
			Bureaucrat b1("One", 1);
			Bureaucrat b2("Two", 100);
			roboto = intern.makeForm("robotomy request", "home");
			if (roboto)
			{
				b1.signForm(*roboto);
				b1.executeForm(*roboto);
				b2.executeForm(*roboto);
			}

	}
	catch (const std::exception& ex) 
	{
		std::cout << ex.what() << std::endl;
	}

	delete roboto;

	return (0);

}