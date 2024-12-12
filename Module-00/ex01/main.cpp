/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:49:33 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/12 11:19:45 by mel-hamd         ###   ########.fr       */
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
		getline(std::cin ,input);
		if (input == "ADD")
			myPhoneBook.addContact();
		if (input == "SEARCH")
		{
			myPhoneBook.listContacts();
			if (myPhoneBook:: > 0)
			{
				getline(std::cin, input);
				id = atoi(input.c_str());
				if (id < 0 || id > 7)
					continue ;
				myPhoneBook.showContact(id);	
			}
		}
	}
}