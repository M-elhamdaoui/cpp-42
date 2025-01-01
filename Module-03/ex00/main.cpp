/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 09:49:25 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/01 11:41:39 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
	ClapTrap a("A");
	ClapTrap b("B");
	
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