/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:04:24 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/22 16:56:40 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
	private :
		const std::string name;
		bool done;
		const int requiredGradeToSign;
		const int requiredGradeToExec;

	public :
		Form();
		Form(int);
		Form(const Form& copy);
		~Form();
		
		Form& operator=(const Form& copy);

		void  beSigned();

		std::string getName() const;
		int getRequiredGradeToSign();
		int getRequiredGradeToExec();

		class GradeTooLowException : public std::exception {
			private :
				const std::string msg;
			public :
				GradeTooLowException(std::string msg) : msg(msg)
				{

				}
				const char* what() const throw() {
					return (this->msg.c_str());
				}
				~GradeTooLowException() throw() {
					
				}
		};
		class GradeTooHighException : public std::exception {
			private :
					const std::string msg;
			public :
			 		GradeTooHighException(std::string msg) : msg(msg){

					}
					const char* what() const throw() {
						return (this->msg.c_str());	
					}
					~GradeTooHighException() throw() {

					}
		};
};