/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:00:11 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/09 11:18:29 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat : default constartor " << std::endl;
}



WrongCat::WrongCat(const WrongCat &copy) {
	std::cout << "WrongCat : Copy constartor " << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat &copy) {
	std::cout << "WrongCat : Copy  assignment operator " << std::endl;
	if (this != &copy)
	{
		this->type = copy.getType();
	}
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat : destractor called !" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << this->type << " : WrongCat making Sound" << std::endl;
}