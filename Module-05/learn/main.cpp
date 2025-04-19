/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 07:00:18 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/19 10:27:41 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Rectangle.hpp"
# include "Triangle.hpp"

int  main() {
	try
	{
		Rectangle	rect;
		Triangle	tri;

		rect.setHeight(50);
		rect.setWidth(-50);

		tri.setA(10, 20);
		tri.setB(20, 5);
		tri.setC(30, 2);
		std::cout << "Height : " << rect.getHeight() << " | Width : " << rect.getWidth() << std::endl;
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0); 
}