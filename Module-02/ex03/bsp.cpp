/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 02:44:36 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/30 05:42:05 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"



static Fixed calc_area(Point  a, Point  b, Point  c)
{
	Fixed d(2.0f);
	Fixed res = (a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY())) ;
	if (res.toFloat() < 0)
		res.setRawBits(res.getRawBits() * (-1));
	return (res / d);
}


bool bsp( Point const a, Point const b, Point const c, Point const point)
{
		Fixed globalArea = calc_area(a,b, c);
		Fixed area1  = calc_area(a, b, point);
		Fixed area2 = calc_area(a, c, point);
		Fixed area3 = calc_area(b, c , point);
		if (area1 == 0 || area2 == 0 || area3 == 0)
			return (false);
		if ((area1 +  area2 + area3).toFloat() != globalArea.toFloat())
			return (false);
		return (true);
}