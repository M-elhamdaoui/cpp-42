/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:29:04 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/21 09:59:57 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

int PhoneBook::offset = 0;
int PhoneBook::size	  = 0;

bool checkVlidInput(std::string input)
{
	int	i;

	i = 0; 
	if (input.empty())
		return (0);
	while (input[i] != '\0')
	{
		if (input[i] < 32 || input[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

int	checkValidNumber(std::string number)
{
	int	i;

	if (number[0] != '+' && !isdigit(number[0]))
	{
		return (0);
	}
	i = 1;
	while (number[i])
	{
		if (!isdigit(number[i]))
			return (0);
		i++;
	}
	if (i < 10)
	{
		return (0);
	}
	return (1);
}

void PhoneBook::insertFirstName()
{
	std::string input;
	
	while (1)
	{
		std::cout << std::left << std::setw(15) << "First Name" << " : ";
		if (getline(std::cin, input).eof() )
			exit(0);
		if (checkVlidInput(input))
		{
			this->contacts[PhoneBook::offset].setFirstName(input);
			break;
		}
		std::cout << "Its not valid first name !" << std::endl;
	}
}

void PhoneBook::insertLastName()
{
	std::string input;
	
	while (1)
	{
		std::cout << std::left << std::setw(15) << "Last Name" << " : ";
		if (getline(std::cin, input).eof() )
			exit(0);
		if (checkVlidInput(input))
		{
			this->contacts[PhoneBook::offset].setLastName(input);
			break;
		}
		std::cout << "Its not valid last name !" << std::endl;
	}
}

void PhoneBook::insertNickname()
{
	std::string input;

	while (1)
	{
		std::cout << std::left << std::setw(15) << "Nickname" << " : ";
		if (getline(std::cin, input).eof() )
			exit(0);
		if (checkVlidInput(input))
		{
			this->contacts[PhoneBook::offset].setNickname(input);
			break;
		}
		std::cout << "Its not valid nickname !" << std::endl;
	}
}

void PhoneBook::insertPhoneNumber()
{
	std::string input;

	while (1)
	{
		std::cout << std::left << std::setw(15) << "Phone number" << " : ";
		if (getline(std::cin, input).eof())
			exit(0);
		if (checkVlidInput(input) && checkValidNumber(input))
		{
			this->contacts[PhoneBook::offset].setPhoneNumber(input);
			break;
		}
		std::cout << "Not valid number !" << std::endl;
	}
}

void PhoneBook::insertDarkSecret()
{
	std::string input;

	while (1)
	{
		std::cout << std::left << std::setw(15) << "Dark secret" << " : ";
		if (getline(std::cin, input).eof() )
			exit(0);
		if (checkVlidInput(input))
		{
			this->contacts[PhoneBook::offset].setDarkestSecret(input);
			break;
		}
		std::cout << "Not valid dark secret !" << std::endl;
	}
	
}

void PhoneBook::addContact()
{
	std::string input;

	this->contacts[PhoneBook::offset].setIndex(PhoneBook::offset);
	this->insertFirstName();
	this->insertLastName();
	this->insertNickname();
	this->insertPhoneNumber();
	this->insertDarkSecret();
	std::cout << "The phone number has been created !" << std::endl;
	
	if (PhoneBook::offset + 1 == 8)
		PhoneBook::offset = 0;
	else
		PhoneBook::offset++;
	if (PhoneBook::size + 1 > 8)
		PhoneBook::size = 8;
	else
		PhoneBook::size += 1;
}

void PhoneBook::listContacts()
{
	int	i, j;

	i = 0;
	j = 0;
	while (j < 45)
	{
		std::cout << "-";
		j++;
	}
	std::cout << std::endl;
	std::cout << std::right;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "index";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "first name";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "last name";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "nickname";
	std::cout << "|" << std::endl;
	j = 0;
	while (j < 45)
	{
		std::cout << "-";
		j++;
	}
	std::cout << std::endl;
	while (i < PhoneBook::size)
	{
		this->contacts[i].shortDisplay();
		i++;
	}
}

void PhoneBook::showContact(int i)
{
	if (i < PhoneBook::size)
		this->contacts[i].detailsDisplay();
}