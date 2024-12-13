/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:11:06 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/13 11:29:03 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


void	printTenChars(std::string str)
{
	int		i;
	std::string res;
	i = 0;
	res = "";
	while (str[i] && i < 9)
	{
		res += str[i];
		i++;
	}
	if(str[i] && str[i + 1])
		res+=  ".";
	else if (str[i])
		res += str[i];
	std::cout << res;
}

void Contact::setFirstName(std::string firstName)
{
	this->firsrName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;	
}

void Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

void Contact::setIndex(int index)
{
	this->index = index;
}

void Contact::shortDisplay()
{
	int i;
	i = 0;
	std::cout << std::right;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << this->index;
	std::cout << "|";
	std::cout << std::setw(10);
	printTenChars(this->firsrName);
	std::cout << "|";
	std::cout << std::setw(10);
	printTenChars(this->lastName);
	std::cout << "|";
	std::cout << std::setw(10);
	printTenChars(this->nickname);
	std::cout << "|" << std::endl;
	while (i < 45)
	{
		std::cout << "-";
		i++;
	}
	std::cout << std::endl;
}

void Contact::detailsDisplay()
{
	std::cout << std::left << std::setw(15) << "First Name" ;
	std::cout << " : ";
	std::cout << std::left << this->firsrName << std::endl;
	std::cout << std::left << std::setw(15) << "Last Name" ;
	std::cout << " : ";
	std::cout << std::left << this->lastName << std::endl;
	std::cout << std::left << std::setw(15) << "Nickname" ;
	std::cout << " : ";
	std::cout << std::left << this->nickname << std::endl;
	std::cout << std::left << std::setw(15) << "Phone number " ;
	std::cout << " : ";
	std::cout << std::left << this->phoneNumber << std::endl;
	std::cout << std::left << std::setw(15) << "Dark secret" ;
	std::cout << " : ";
	std::cout << std::left << this->darkestSecret << std::endl;
}