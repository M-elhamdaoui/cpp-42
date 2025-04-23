/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:44:19 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/23 10:44:52 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <exception>
#include <iostream>
#include "Form.hpp"

class Form;

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

		void signForm(Form& form);

		void incrementGrade();
		void decrementGrade();

		class GradeTooHighException : public std::exception {
			public :
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public :
				const char* what() const throw();
		};
			
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat bureau);