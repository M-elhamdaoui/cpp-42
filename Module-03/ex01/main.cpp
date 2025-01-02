/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 09:49:25 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/02 21:56:10 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main()
{
	ScavTrap a("A");
	ScavTrap b("B");
	
	a.printDetails();
	b.printDetails();
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	a.printDetails();
	b.printDetails();
	a.guardGate();
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	a.printDetails();
	b.printDetails();
	b.beRepaired(15);
	a.attack(b.getName());
	return (0);
}