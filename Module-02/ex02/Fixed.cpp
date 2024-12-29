/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:44:06 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/29 22:16:44 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractBites = 8;



std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat() ;
	return (out);
}
//constractures 

Fixed::Fixed(const int n){
	std::cout << "Int constructor called"<<std::endl;
	this->fixedValue = n << fractBites;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedValue  = roundf(n * (1 << fractBites));
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

//member functions

float Fixed::toFloat() const
{
	float res = (float)this->fixedValue / (1 << fractBites);
	return  (res);
}

int Fixed::toInt() const {
	return (this->fixedValue >> fractBites);
}


Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called !" << std::endl;
	this->fixedValue = copy.getRawBits();
	return (*this);
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


// destractor 
Fixed::~Fixed()
{
	std::cout << "Destructor called !" << std::endl;
}

//opertors

bool Fixed::operator < (const Fixed op) const{
	return (this->fixedValue < op.getRawBits());
}

bool Fixed::operator <= (const Fixed op) const{
	return (this->fixedValue <= op.getRawBits());
}


bool Fixed::operator > (const Fixed op) const{
	return (this->fixedValue > op.getRawBits());
}
bool Fixed::operator >= (const Fixed op) const{
	return (this->fixedValue >= op.getRawBits());
}


bool Fixed::operator == (const Fixed op) const{
	return (this->fixedValue == op.getRawBits());
}
bool Fixed::operator != (const Fixed op) const{
	return (this->fixedValue != op.getRawBits());
}

float Fixed::operator * (const Fixed op)
{
	int res = (this->fixedValue * op.getRawBits()) >> fractBites;
	Fixed r;
	r.setRawBits(res);
	return (r.toFloat());
}

Fixed Fixed::operator / (const Fixed op)
{
	int res = (this->fixedValue << fractBites) / op.getRawBits();
	Fixed r;
	r.setRawBits(res);
	return (r);
}