/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:34:23 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/27 22:21:17 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractBites = 8;


Fixed::Fixed() : fixedValue(0)
{
	std::cout << "Default constractor called !" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : fixedValue(copy.getRawBits())
{
	std::cout << "copy contructor called !" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	this->fixedValue = copy.getRawBits();
	std::cout << "Copy assignment operator called !";
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called !" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits medthod called " << std::endl;
	return this->fixedValue;
}


 void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits method called "<< std::endl;
	this->fixedValue = raw ;
 }

