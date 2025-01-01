/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 11:53:36 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/01 15:14:00 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20; 
	std::cout << "ScavTrap : Default constractor called !" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20; 
	std::cout << "ScavTrap : Parametraze constractor  called !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	this->name = copy.getName();
	this->attackDamage = copy.getAttackDamage();
	this->energyPoints = copy.getEnergyPoints();
	this->hitPoints = copy.getHitPoints();
	std::cout << "ScavTrap : Copy constractor  called !" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &copy){
	
	
	this->name = copy.getName();
	this->attackDamage = copy.getAttackDamage();
	this->energyPoints = copy.getEnergyPoints();
	this->hitPoints = copy.getHitPoints();
	return (*this);
}