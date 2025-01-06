/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 09:49:50 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/06 09:39:10 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : name("Unknown"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap : Default constractor called !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap : Parametraze constractor  called !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->name = copy.getName();
	this->attackDamage = copy.getAttackDamage();
	this->energyPoints = copy.getEnergyPoints();
	this->hitPoints = copy.getHitPoints();
	std::cout << "ClapTrap : Copy constractor  called !" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &copy){
	this->name = copy.getName();
	this->attackDamage = copy.getAttackDamage();
	this->energyPoints = copy.getEnergyPoints();
	this->hitPoints = copy.getHitPoints();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : Destractor called !" << std::endl;
}

std::string ClapTrap::getName() const {
	return (this->name);
}

int ClapTrap::getHitPoints() const {
	return (this->hitPoints);
}

int ClapTrap::getEnergyPoints() const {
	return (this->energyPoints);
}

int ClapTrap::getAttackDamage() const {
	return (this->attackDamage);
}

void	ClapTrap::setName(std::string name) {
	this->name = name;
}

void		ClapTrap::printDetails() const
{
	std::cout << this->name << ":: hit points : " << this->hitPoints << ", energy points : " << this->energyPoints<< ", attack damage : " << this->attackDamage  << std::endl;
}

void	ClapTrap::attack(const std:: string& target) {
	if (this->hitPoints == 0)
	{
		std::cout << this->name << " has no hit points !" << std::endl;
		return ;
	}
	if (this->energyPoints == 0)
	{
		std::cout << this->name << " has no energy points !" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks " << target << ", causing " << this->attackDamage << " point of damage !" << std::endl;
	this->energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
		
	if (this->hitPoints == 0)
		std::cout << this->name << " already dead !" << std::endl;
	else 
	{
		unsigned int damage = amount;
		if (this->hitPoints < amount)
		{
			damage = this->hitPoints;
			this->hitPoints = 0;
		}
		std::cout << this->name << " got damaged "  << " by " << damage << " point of damage !" << std::endl;	
	}	
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->hitPoints == 0)
	{
		std::cout << this->name << " has no hit points !" << std::endl;
		return ;
	}
	if (this->energyPoints == 0)
	{
		std::cout << this->name << " has no energy points !" << std::endl;
		return ;
	}
	std::cout << this->name << "'s hit points : " << this->hitPoints << " repaire to be " << this->hitPoints + amount << " has been completed !" << std::endl;
	this->hitPoints += amount;
	this->energyPoints--;
}