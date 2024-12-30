/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 02:44:45 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/30 05:34:19 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	private :
		const Fixed x;
		const Fixed y;
	public :
		Point();
		Point(const float x, const float y);
		Point(const Point &copy);
		Point& operator= (const Point &copy);
		~Point();
		
		Fixed getX() const;
		Fixed getY() const;
};


#endif