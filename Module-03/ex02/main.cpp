/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 09:49:25 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/04 00:10:45 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main()
{
	FragTrap a("A");
	FragTrap b("B");
	
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