/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:44:19 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/19 15:04:42 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <exception>
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

		void 		setGrade(int grade);
		int  		getGrade() const;
		std::string getName() const;

		void increment();
		void decrement();

		class GradeTooHighException : public std::exception {
			public :
				const char* what() const throw() {
					return ("Grade too high !");
				}
		};

		class GradeTooLowException : public std::exception {
			public :
				const char* what() const throw() {
					return ("Grade too low !");
				}
		};
			
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat bureau);