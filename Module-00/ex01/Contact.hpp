/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:11:09 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/11 19:43:17 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string firsrName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
	int			index;

public:
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickname(std::string nickname);
	void setPhoneNumber(std::string PhoneNumber);
	void setDarkestSecret(std::string DarkesetSecret);
	void setIndex(int index);
	void shortDisplay();
	void detailsDisplay();
};

#endif