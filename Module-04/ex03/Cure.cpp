/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 09:40:33 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/10 10:30:28 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure : defult constactor " << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria("cure")
{
	std::cout << "Cure : Copy constractor" << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
	std::cout << "Cure : copy assignment operator" << std::endl;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure : destractor" << std::endl;
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << " * heals " << target.getName() << "'s wounds * " << std::endl;
}