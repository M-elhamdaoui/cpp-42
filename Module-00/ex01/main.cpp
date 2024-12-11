/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:49:33 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/11 15:19:09 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int main()
{
	Contact one;
	std::string	input;

	// std::cout << "|" << std::setw(10) << "Firstnamejumjmjumjmu" ;
	// std::cout << "|" << std::setw(10) << "Firstname" ;
	// std::cout << "|" << std::setw(10) << "Firstname" << "|";
	getline(std::cin, input);
	one.setFirstName(input);
	one.setLastName("EL Hamdaoui");
	one.setIndex(0);
	one.setNickname("Voop");
	one.setDarkestSecret("I am good");
	one.setPhoneNumber("0648043465");
	one.shortDisplay();
	one.detailsDisplay();
}