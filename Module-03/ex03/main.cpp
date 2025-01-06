/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 09:49:25 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/06 06:13:33 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main()
{
	DiamondTrap a("A");
	DiamondTrap b("B");
	
	a.whoAmI();
	b.whoAmI();
	a.highFivesGuys();
	b.highFivesGuys();
	a.printDetails();
	b.printDetails();
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	a.printDetails();
	b.printDetails();
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	a.printDetails();
	b.printDetails();
	b.beRepaired(15);
	a.attack(b.getName());
	return (0);
}