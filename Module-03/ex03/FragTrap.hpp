/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 22:13:16 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/04 05:22:55 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp" 

class FragTrap : virtual public ClapTrap {

	public  :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		~FragTrap();
		FragTrap &operator = (const FragTrap &copy);

		void highFivesGuys(void);
};



#endif