/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:04:24 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/26 13:06:54 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include <fstream>
#include <ctime>
#include <cstdlib>

class Bureaucrat;

class AForm {
	private :
		const std::string name;
		bool status;
		const int requiredGradeToSign;
		const int requiredGradeToExec;

	public :
		AForm();
		AForm(std::string name, int lowToSin, int lowToExec);
		AForm(const AForm& copy);
		virtual ~AForm();
		
		AForm& operator=(const AForm& copy);

		void  beSigned(const Bureaucrat& bureu);

		std::string getName() const;
		int getRequiredGradeToSign() const;
		int getRequiredGradeToExec() const;
		bool getStatus() const;

		class GradeTooLowException : public std::exception {
			public :
				const char* what() const throw();
		};
		class GradeTooHighException : public std::exception {
			public :
					const char* what() const throw();
		};
		class FormNotSigned : public std::exception {
			const char* what() const throw();
		};
		virtual void execute(Bureaucrat const & executor) const = 0 ; 
};

std::ostream& operator<< (std::ostream& os, const AForm& form) ;