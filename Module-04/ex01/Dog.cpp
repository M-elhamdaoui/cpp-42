/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:04:55 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/09 15:55:40 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog : default constartor " << std::endl;
	this->brain = new Brain();
}



Dog::Dog(const Dog &copy) {
	std::cout << "Dog : Copy constartor " << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog &copy) {
	std::cout << "Dog : Copy  assignment operator " << std::endl;
	if (this != &copy)
	{
		delete this->brain;
		this->brain = new Brain(*(copy.getBrain()));
		this->type = copy.getType();
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog : destractor called !" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const {
	std::cout << this->type << " : Dog making Sound" << std::endl;
}

Brain* Dog::getBrain() const {
	return (this->brain);
}
