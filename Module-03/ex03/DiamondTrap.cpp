/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 05:03:09 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/05 07:23:32 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name") , ScavTrap(), FragTrap() {
	this->name = "default";
	if (this->hitPoints != 100)
		this->hitPoints = 100;
	if (this->energyPoints != 50)
		this->hitPoints = 50;
	if (this->attackDamage != 30)
		this->attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") , ScavTrap(name), FragTrap(name) {
	this->name = name;
	if (this->hitPoints != 100)
		this->hitPoints = 100;
	if (this->energyPoints != 50)
		this->hitPoints = 50;
	if (this->attackDamage != 30)
		this->attackDamage = 30;
}