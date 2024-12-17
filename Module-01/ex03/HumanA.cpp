/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:34:46 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/17 14:53:04 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) : club(club)
{
	this->name = name;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->club.getType() << std::endl;
}