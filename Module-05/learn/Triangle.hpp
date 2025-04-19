/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Triangle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 08:15:30 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/19 13:46:29 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <array>

class Triangle {
	private :
	std::array<int, 2> a;
	std::array<int, 2> b;
	std::array<int, 2> c;
	public :
		Triangle();
		Triangle(const Triangle& copy);
		Triangle& operator= (const Triangle& copy);
		~Triangle();

		std::array<int, 2> getA() const;
		std::array<int, 2> getB() const;
		std::array<int, 2> getC() const;

		void setA(int x, int y);
		void setB(int x, int y);
		void setC(int x, int y);

		class NotAllowedValues  : public std::exception {
			public :
				const char* what() const throw() {
					return ("Not valid");
				}
			
		};

};