/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 07:00:18 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/19 13:50:52 by mel-hamd         ###   ########.fr       */
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
		rect.setWidth(50);

		tri.setA(100, 20);
		tri.setB(20, 5);
		tri.setC(30, 2);
		std::cout << "Height : " << rect.getHeight() << " | Width : " << rect.getWidth() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0); 
}