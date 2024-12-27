/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:34:23 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/27 19:07:20 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractBites = 0;

int Fixed::getFixedValue() const
{
	return this->fixedValue;
}

Fixed::Fixed() : fixedValue(0)
{
	std::cout << "Default constractor called !" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : fixedValue(copy.getFixedValue())
{
	std::cout << "copy contructor called !" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	if (this == &copy)
		return (*this);
	this->fixedValue = copy.getFixedValue();
	std::cout << "Copy assignment operator called !";
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called !" << std::endl;
}