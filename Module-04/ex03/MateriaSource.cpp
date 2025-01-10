/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:22:09 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/10 19:00:33 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{

	for (int i = 0; i < 4; i++)
	{
		this->learnedMateria[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{

	for (int i = 0; i < 4; i++)
	{
		this->learnedMateria[i] = NULL;
	}
	*this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{

	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->learnedMateria[i])
				delete this->learnedMateria[i];
		}
		for (int i = 0; i < 4; i++)
		{
			this->learnedMateria[i] = copy.getLearnedMateria(i);
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{

	for (int i = 0; i < 4; i++)
	{
		if (this->learnedMateria[i])
			delete this->learnedMateria[i];
	}
}

AMateria *MateriaSource::getLearnedMateria(int i) const
{
	if (this->learnedMateria[i])
		return (this->learnedMateria[i]->clone());
	return (NULL);
};

void MateriaSource::learnMateria(AMateria *toLearn)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->learnedMateria[i])
		{
			this->learnedMateria[i] = toLearn;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (learnedMateria[i] && learnedMateria[i]->getType() == type)
		{
			return learnedMateria[i]->clone();
		}
	}
	return NULL;
}