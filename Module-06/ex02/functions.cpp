/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:07:55 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/29 16:14:28 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"


Base * generate(void) {
	size_t num;
	std::srand(std::time(0));
	num = rand();
	if (num % 3 == 0)
		return new A();
	else if (num % 3 == 1)
		return new B();
	else
		return new C();
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "its Type A " << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "its Type B " << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "its Type C " << std::endl;
	else
		std::cout << "Unknown type " << std::endl;
}
void identify(Base& p) {
	try {
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "its Type A " << std::endl;
		return ;
	}
	catch (const std::exception& ex) {
		(void)ex;
	}
	try {
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "its Type B " << std::endl;
		return ;
	}
	catch (const std::exception& ex) {
		(void)ex;
	}

	try {
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "its Type C " << std::endl;
		return ;
	}
	catch (const std::exception& ex) {
		(void)ex;
	}

	std::cout << "Unknown type " << std::endl;
}