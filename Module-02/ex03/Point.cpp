/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 02:44:55 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/30 05:34:07 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point() : x(0), y(0){
	
};

Point::Point(const float x, const float y) : x(x), y(y){
	
}


Point::Point(const Point &copy) : x(copy.getX()), y(copy.getY()) {
	
}

Point& Point::operator = (const Point &copy)
{
	(Fixed)this->x = copy.x;
	(Fixed)this->y = copy.x;
	return (*this);
}

Point::~Point()
{
	
}


Fixed Point::getX() const
{
	return (this->x);
}
Fixed Point::getY() const
{
	return (this->y);
}