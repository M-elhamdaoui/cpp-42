/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 15:33:26 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/28 17:21:01 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractBites = 8;



std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat() ;
	return (out);
}

Fixed::Fixed(const int n){
	std::cout << "Int constructor called"<<std::endl;
	this->fixedValue = n << fractBites;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedValue  = roundf(n * (1 << fractBites));
}

float Fixed::toFloat() const
{
	float res = (float)this->fixedValue / (1 << fractBites);
	return  (res);
}

int Fixed::toInt() const {
	return (this->fixedValue >> fractBites);
}

Fixed::Fixed() : fixedValue(0)
{
	std::cout << "Default constractor called !" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "copy contructor called !" << std::endl;
	 this->fixedValue = copy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called !" << std::endl;
	this->fixedValue = copy.getRawBits();
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


