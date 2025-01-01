/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 09:49:38 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/01 10:13:55 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CPP
#define CLAPTRAP_CPP

#include <iostream>

class ClapTrap {
	private :
		std::string name;
		int 		hitPoints;
		int 		energyPoints;
		int			attackDamage;

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
		

		void	attack(const std:: string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		
};

#endif