/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:04:13 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/09 16:14:06 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal() {
	std::cout << "Animal : default constartor " << std::endl;
	this->type = "";
}


Animal::Animal(std::string type) {
	std::cout << "Animal : parametraze constartor " << std::endl;
	this->type = type;	
}


Animal::Animal(const Animal &copy) {
	std::cout << "Animal : Copy constartor " << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal &copy) {
	std::cout << "Animal : Copy  assignment operator " << std::endl;
	if (this != &copy)
	{
		this->type = copy.getType();
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal : destractor called !" << std::endl;
}


// void Animal::makeSound() const{
// 	std::cout << this->type <<" : Does not have Sound" << std::endl;
// }


std::string Animal::getType() const  {
	return (this->type);
}

void Animal::setType(std::string type) {
	this->type = type;
}