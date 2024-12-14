/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:49:33 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/14 12:15:23 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	showCommands()
{
	std::cout << "Commands : ADD , SEARCH , EXIT" << std::endl;
}

int main()
{
	PhoneBook myPhoneBook;
	std::string input;
	int			id;
	
	std::cout << "Hi and welcome to my phone book" << std::endl;
	while (1)
	{
		showCommands();
		std::cout << "Command : ";
		if (getline(std::cin, input).eof() || input == "EXIT")
			exit(0);
		if (input == "ADD")
			myPhoneBook.addContact();
		if (input == "SEARCH")
		{ 
			myPhoneBook.listContacts();
			std::cout << "Enter index that you want to show details about or any key to leave the prompt !" << std::endl;
			if (getline(std::cin, input).eof())
				exit(0);
			id = atoi(input.c_str());
			if ((input.size() != 1 || !isdigit(input[0])) || (id < 0 || id > 7))
				continue ;
			myPhoneBook.showContact(id);	
		}
	}
}