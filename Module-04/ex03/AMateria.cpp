/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:30:10 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/10 08:28:20 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("")
{
	std::cout << "AMareria : Default constradtor " << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria : parametrize constratcor " << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "AMateria : copy constratcor " << std::endl;
	*this = copy;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	std::cout << "AMateria : copy assignment operator " << std::endl;
	if (this != &copy)
	{
		this->type = copy.getType();
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria : destactor" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria : default use of type " << this->type << " , " << target.getName() << " ." << std::endl;
}