/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:44:23 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/30 04:42:07 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const d( Fixed( 5.05f ) / Fixed( 2 ) );
	Fixed const ss( Fixed( 5.05f ) - Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << d << std::endl;
	std::cout << ss << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	return (0);
}