/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 09:40:33 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/10 18:59:47 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &copy) : AMateria("cure")
{

	*this = copy;
}

Cure &Cure::operator=(const Cure &copy)
{
	if (this != &copy)
		return (*this);
	return (*this);
}

Cure::~Cure()
{
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << " * heals " << target.getName() << "'s wounds * " << std::endl;
}