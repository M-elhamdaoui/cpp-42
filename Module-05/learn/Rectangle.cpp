/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rectangle.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 06:03:27 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/19 06:58:39 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rectangle.hpp"

Rectangle::Rectangle() {
	std::cout << "Default constructor !" << std::endl;
	this->width = 0;
	this->height = 0;
}

Rectangle::Rectangle (const Rectangle &r) {
	std::cout << "Copy constructor !" << std::endl;
	*this = r; 
}

Rectangle& Rectangle::operator= (const Rectangle &copy) {
	std::cout << "Assignment operator !" << std::endl;
	if (this != &copy) {
		this->width = copy.getWidth();
		this->height = copy.getHeight();
	}
	return (*this);
}

Rectangle::~Rectangle() {
	std::cout << "Destructor !" << std::endl;
}


int Rectangle::getWidth() const {
	return this->width;
}

int Rectangle::getHeight() const {
	return this->height;
}


void Rectangle::setWidth(int width) {
	this->width = width;
}

void Rectangle::setHeight(int height) {
	this->height = height;
}