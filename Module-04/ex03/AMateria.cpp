/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:30:10 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/10 18:58:55 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : type("")
{
}

AMateria::AMateria(std::string const &type)
{

	this->type = type;
}

AMateria::AMateria(const AMateria &copy)
{

	*this = copy;
}

AMateria &AMateria::operator=(const AMateria &copy)
{

	if (this != &copy)
	{
		this->type = copy.getType();
	}
	return (*this);
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria : default use of type " << this->type << " , " << target.getName() << " ." << std::endl;
}