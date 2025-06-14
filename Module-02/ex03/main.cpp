/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 02:42:35 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/30 05:46:07 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main ()
{
	Point a(0, 9);
	Point b(9, 0);
	Point c(0, 0);
	Point x(2, 2);

	bool res = bsp(a, b , c , x);

	if (res)
		std::cout << "The point x(" << x.getX() << ", " << x.getY() << ") is in the triangle !" << std::endl;
	else
		std::cout << "The point x(" << x.getX() << ", " << x.getY() << ") is not in the triangle !" << std::endl;	 
	return (0);
}