/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:51:13 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/09 10:52:05 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal : default constartor " << std::endl;
	this->type = "";
}


WrongAnimal::WrongAnimal(std::string type) {
	std::cout << "WrongAnimal : parametraze constartor " << std::endl;
	this->type = type;	
}


WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	std::cout << "WrongAnimal : Copy constartor " << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy) {
	std::cout << "WrongAnimal : Copy  assignment operator " << std::endl;
	if (this != &copy)
	{
		this->type = copy.getType();
	}
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal : destractor called !" << std::endl;
}


void WrongAnimal::makeSound() const{
	std::cout << this->type <<" : Does not have Sound" << std::endl;
}


std::string WrongAnimal::getType() const  {
	return (this->type);
}

void WrongAnimal::setType(std::string type) {
	this->type = type;
}