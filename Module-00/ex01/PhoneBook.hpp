/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:29:01 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/13 10:54:38 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	static int		offset;
	static int		size;
public:
	void	addContact();
	void	listContacts();
	void	showContact(int i);
	void	insertFirstName();
	void	insertLastName();
	void	insertNickname();
	void	insertPhoneNumber();
	void	insertDarkSecret();
};
#endif