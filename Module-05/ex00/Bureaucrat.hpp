/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:44:19 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/02/22 16:34:00 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

class Bureaucrat  {
	private :
		const std::string name;
		int grade;
	public :
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(std::string name, int grade);
		
		~Bureaucrat();
		
		Bureaucrat &operator=(const Bureaucrat &copy);
			
};