/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:52:38 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/16 11:30:10 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::Zombie()
{

}

Zombie::~Zombie(void)
{
	std::cout << this->name << ": Destroyed !" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ...";
	std::cout << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

