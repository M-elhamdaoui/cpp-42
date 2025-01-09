/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:04:55 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/09 10:18:52 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog : default constartor " << std::endl;
}



Dog::Dog(const Dog &copy) {
	std::cout << "Dog : Copy constartor " << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog &copy) {
	std::cout << "Dog : Copy  assignment operator " << std::endl;
	if (this != &copy)
	{
		this->type = copy.getType();
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog : destractor called !" << std::endl;
}

void Dog::makeSound() const {
	std::cout << this->type << " : Dog making Sound" << std::endl;
}