/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rectangle.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 06:02:36 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/19 06:49:56 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Rectangle {
	private :
		int width;
		int height;
	
	public :
		Rectangle();
		Rectangle(const Rectangle &r);
		~Rectangle();
		Rectangle& operator= (const Rectangle &copy);

		int getWidth() const;
		int getHeight() const;

		void setWidth(int width);
		void setHeight(int height);

};