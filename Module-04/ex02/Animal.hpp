/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:04:30 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/09 16:13:57 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

	protected :
		std::string type;
	public :
		Animal();
		Animal(std::string type);
		Animal(const Animal &copy);
		Animal& operator=(const Animal &copy);
		virtual ~Animal();

		virtual void makeSound() const = 0;
		
		std::string getType() const;
		void		setType(std::string type);
};

#endif