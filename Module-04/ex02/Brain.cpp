/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:46:22 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/09 13:53:57 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain : default constartor " << std::endl;
	for (int i = 0; i < 100 ; i++) {
		this->ideas[i] = "Idea !";
	}
}


Brain::Brain(const Brain &copy) {
	std::cout << "Brain : Copy constartor " << std::endl;
	*this = copy;
}

Brain& Brain::operator=(const Brain &copy) {
	std::cout << "Brain : Copy  assignment operator " << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100 ; i++){
			this->ideas[i] = copy.getIdea(i);
		}
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain : destractor called !" << std::endl;
}


std::string Brain::getIdea(int i) const {
	if (i < 0 || i > 99 )
		return "";
	return this->ideas[i];
}	

