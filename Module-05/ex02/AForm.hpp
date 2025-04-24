/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:04:24 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/24 06:28:48 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

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

		void  beSigned(Bureaucrat& bureu);

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
};

std::ostream& operator<< (std::ostream& os, const AForm form) ;