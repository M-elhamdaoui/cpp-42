/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Triangle.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 10:04:11 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/19 13:50:20 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Triangle.hpp"

Triangle::Triangle() {
	this->a[0] = 0;
	this->a[1] = 0;
	this->b[0] = 0;
	this->b[1] = 0;
	this->c[0] = 0;
	this->c[1] = 0;

}

Triangle::Triangle(const Triangle& copy) {
	*this = copy;
}

Triangle& Triangle::operator= (const Triangle& copy) {
	if (this != &copy) {
		this->a = copy.a;
		this->b =  copy.b;
		this->c = copy.c;
	}
	return (*this);
}

Triangle::~Triangle() {
	std::cout << "Destructor !" << std::endl;
}

std::array<int, 2> Triangle::getA() const {
	return this->a;
}
std::array<int, 2> Triangle::getB() const {
	return this->b;
}
std::array<int, 2> Triangle::getC() const {
	return this->c;
}

void Triangle::setA(int x, int y) {
	if (x > 50) {
		throw Triangle::NotAllowedValues();
	}
	this->a[0] = x;
	this->a[1] = y;
}

void Triangle::setB(int x,  int y) {
	this->b[0] = x;
	this->b[1] = y;
}

void Triangle::setC(int x, int y) {
	this->c[0] = x;
	this->c[1] = y;
}