/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:52:54 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/16 11:31:46 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
		std::string name;
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );
#endif