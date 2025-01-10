/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:45:06 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/10 09:36:32 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice : defult constactor " << std::endl;
}

Ice::Ice(const Ice &copy)
{
	std::cout << "Ice : Copy constractor" << std::endl;
	*this = copy;
}

Ice &Ice::operator=(const Ice &copy)
{
	std::cout << "Ice : copy assignment operator" << std::endl;
	if (this != &copy)
	{
		this->type = copy.getType();
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice : destractor" << std::endl;
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << " * shoots an ice bolt at " << target.getName() << " * " << std::endl;
}