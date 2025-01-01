/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 09:49:50 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/01 10:08:36 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : name(""), hitPoints(10), energyPoints(10), attackDamage(10)
{
	std::cout << "Default constractor called !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(10)
{
	std::cout << "Default parametraze constractor  called !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->name = copy.getName();
	this->attackDamage = copy.getAttackDamage();
	this->energyPoints = copy.getEnergyPoints();
	this->hitPoints = copy.getHitPoints();
	std::cout << "Default copy constractor  called !" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &copy){
	this->name = copy.getName();
	this->attackDamage = copy.getAttackDamage();
	this->energyPoints = copy.getEnergyPoints();
	this->hitPoints = copy.getHitPoints();
	return (*this);
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
