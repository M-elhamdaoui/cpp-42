/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:33:08 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/10 16:04:37 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("")
{
	std::cout << "Character : Default constractor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}
Character::Character(std::string name) : name(name)
{
	std::cout << "Character : parameterized constractor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::Character(const Character &copy)
{
	std::cout << "Character : copy constractor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
	*this = copy;
}

Character &Character::operator=(const Character &copy)
{
	std::cout << "Character : copy assignment operator" << std::endl;
	if (this != &copy)
	{
		this->name = copy.getName();
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
		}
		for (int i = 0; i < 4; i++)
		{
			this->inventory[i] = copy.getInvantory(i);
		}
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character : destractor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

std::string const &Character::getName() const
{
	return (this->name);
}

AMateria *Character::getInvantory(int i) const
{
	if (this->inventory[i])
		return (this->inventory[i]->clone());
	return (NULL);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (this->inventory[idx])
	{
		this->inventory[idx]->use(target);
	}
}