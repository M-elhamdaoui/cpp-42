/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 02:42:18 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/30 02:43:03 by mel-hamd         ###   ########.fr       */
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

	
	Fixed(const int n);
	Fixed(const float n);
	
	~Fixed();
		
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
	
	Fixed  operator * (const Fixed op) ;
	Fixed  operator / (const Fixed op) ;
	Fixed  operator + (const Fixed op) ;
	Fixed  operator - (const Fixed op) ;
	
	Fixed operator -- (int) ;
	Fixed &operator -- () ;
	Fixed operator ++ (int) ;
	Fixed &operator ++ () ;

	static Fixed& min(Fixed &a, Fixed &b);
	static const Fixed& min(const Fixed &a, const Fixed &b);
	static Fixed& max(Fixed &a, Fixed &b);
	static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif 