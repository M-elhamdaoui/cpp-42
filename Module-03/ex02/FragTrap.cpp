/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 22:13:05 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/04 00:11:36 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30; 
	std::cout << "FragTrap : Default constractor called !" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30; 
	std::cout << "FragTrap : Parametraze constractor  called !" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	this->name = copy.getName();
	this->attackDamage = copy.getAttackDamage();
	this->energyPoints = copy.getEnergyPoints();
	this->hitPoints = copy.getHitPoints();
	std::cout << "FragTrap : Copy constractor  called !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : Destractor called !" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &copy){  
	
	
	this->name = copy.getName();
	this->attackDamage = copy.getAttackDamage();
	this->energyPoints = copy.getEnergyPoints();
	this->hitPoints = copy.getHitPoints();
	return (*this);
}


void FragTrap::highFivesGuys(void) {
	std::cout << this->name << " : " << "Hey guys !" << std::endl;
}
