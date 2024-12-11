/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:49:33 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/11 19:48:39 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	showCommands()
{
	std::cout << "Hi and welcome to my phone book" << std::endl;
	std::cout << "Commands : ADD , SEARCH , EXIT" << std::endl;
}

int main()
{
	PhoneBook myPhoneBook;
	std::string input;

	while (1)
	{
		showCommands();
		getline(std::cin ,input);
		if (input == "ADD")
			myPhoneBook.addContact();
		if (input == "SEARCH")
	}
}