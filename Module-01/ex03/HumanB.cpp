/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:34:55 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/24 18:08:26 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->club = NULL;
}

void HumanB::setWeapon(Weapon &club)
{
	this->club = &club;
}

void HumanB::attack()
{
	if (!this->club)
		return;
	std::cout << this->name << " attacks with their " << this->club->getType() << std::endl;
}