/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:29:04 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/12 19:04:22 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::offset = 0;
bool PhoneBook::full	  = false;

int	checkValidNumber(std::string number)
{
	int	i;

	if (number[0] != '+' && !isdigit(number[0]))
	{
		return (0);
	}
	i = 1;
	while (isdigit(number[i]))
		i++;
	if (i < 10)
	{
		return (0);
	}
	return (1);
}

void PhoneBook::addContact()
{
	std::string input;

	this->contacts[PhoneBook::offset].setIndex(PhoneBook::offset);
	std::cout << std::left << std::setw(15) << "First Name" << " : ";
	getline(std::cin, input);
	this->contacts[PhoneBook::offset].setFirstName(input);
	
	std::cout << std::left << std::setw(15) << "Last Name" << " : ";
	getline(std::cin, input);
	this->contacts[PhoneBook::offset].setLastName(input);

	std::cout << std::left << std::setw(15) << "Nickname" << " : ";
	getline(std::cin, input);
	this->contacts[PhoneBook::offset].setNickname(input);

	while (1)
	{
		std::cout << std::left << std::setw(15) << "Phone number" << " : ";
		getline(std::cin, input);
		if (checkValidNumber(input))
			break;
		else
			continue;
	}
	this->contacts[PhoneBook::offset].setPhoneNumber(input);

	std::cout << std::left << std::setw(15) << "Dark secret" << " : ";
	getline(std::cin, input);
	this->contacts[PhoneBook::offset].setDarkestSecret(input);
	std::cout << "The phone number has been created !" << std::endl;
	if (PhoneBook::offset + 1 == 8)
		PhoneBook::offset = 0;
	else
		PhoneBook::offset++;
}

void PhoneBook::listContacts()
{
	int	i;

	i = 0;
	while ((i < PhoneBook::offset && PhoneBook::offset <= 8) && i <  8)
	{
		this->contacts[i].shortDisplay();
		i++;
	}
}

void PhoneBook::showContact(int i)
{
	if ((i < PhoneBook::offset && PhoneBook::offset <= 8) && i < 8)
		this->contacts[i].detailsDisplay();
}