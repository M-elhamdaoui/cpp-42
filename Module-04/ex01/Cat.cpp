/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:05:21 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/09 10:18:23 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat : default constartor " << std::endl;
}



Cat::Cat(const Cat &copy) {
	std::cout << "Cat : Copy constartor " << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat &copy) {
	std::cout << "Cat : Copy  assignment operator " << std::endl;
	if (this != &copy)
	{
		this->type = copy.getType();
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat : destractor called !" << std::endl;
}

void Cat::makeSound() const {
	std::cout << this->type << " : Cat making Sound" << std::endl;
}