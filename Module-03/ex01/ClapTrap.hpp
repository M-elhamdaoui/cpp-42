/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 09:49:38 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/06 09:38:14 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CPP
#define CLAPTRAP_CPP

#include <iostream>

class ClapTrap {
	protected :
		std::string name;
		unsigned int 		hitPoints;
		unsigned int 		energyPoints;
		unsigned int			attackDamage;

	public  :
		ClapTrap();
		ClapTrap(std::string);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator = (const ClapTrap &copy);
		~ClapTrap();

		
		std::string getName() const;
		int			getHitPoints() const ;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
		void		printDetails() const;
		void		setName(std::string name);

		void	attack(const std:: string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
		
};

#endif