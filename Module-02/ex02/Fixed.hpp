/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:44:14 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/29 22:16:58 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <ostream>

class Fixed
{
private:
	int fixedValue;
	static const int fractBites;

public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator=(const Fixed &copy);
	~Fixed();
	
	Fixed(const int n);
	Fixed(const float n);
	float 	toFloat() const;
	int		toInt() const;
	
	int getRawBits() const;
	void setRawBits( int const raw );

	bool operator < (const Fixed op) const;
	bool operator <= (const Fixed op) const;
	bool operator > (const Fixed op) const;
	bool operator >= (const Fixed op) const;
	bool operator == (const Fixed op) const;
	bool operator != (const Fixed op) const;
	float  operator * (const Fixed op) ;
	Fixed  operator / (const Fixed op) ;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif 