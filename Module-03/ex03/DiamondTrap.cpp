/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 05:03:09 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/06 06:10:54 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	this->name = "default";
	if (this->hitPoints != 100)
		this->hitPoints = 100;
	if (this->energyPoints != 50)
		this->hitPoints = 50;
	if (this->attackDamage != 30)
		this->attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) {
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	if (this->hitPoints != 100)
		this->hitPoints = 100;
	if (this->energyPoints != 50)
		this->hitPoints = 50;
	if (this->attackDamage != 30)
		this->attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) {
	this->name = copy.getName();
	this->attackDamage = copy.getAttackDamage();
	this->hitPoints	= copy.getHitPoints();
	this->energyPoints = copy.getEnergyPoints();
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap : destractor called " << std::endl;
}


DiamondTrap &DiamondTrap::operator = (const DiamondTrap &copy) {
	std::cout << "Copy assignment operator called " << std::endl;
	this->name = copy.getName();
	this->attackDamage = copy.getAttackDamage();
	this->hitPoints	= copy.getHitPoints();
	this->energyPoints = copy.getEnergyPoints();
	return (*this);
}

void DiamondTrap::whoAmI() {
	std::cout << this->name << ", " << ClapTrap::name << std::endl;
}