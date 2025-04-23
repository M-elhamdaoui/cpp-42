/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:30:16 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/23 11:01:14 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"



Form::Form() : name("Dedault"), requiredGradeToSign(150) , requiredGradeToExec(150) {
	this->status = false;
}


Form::Form(std::string name, int lowToSin, int lowToExec) : name(name),  requiredGradeToSign(lowToSin), requiredGradeToExec(lowToExec) {
	this->status = false;
}


Form::Form(const Form& copy) : name(copy.getName()), requiredGradeToSign(copy.getRequiredGradeToSign()), requiredGradeToExec(copy.getRequiredGradeToExec()) {
	this->status = copy.getStatus();
}

Form::~Form() {

}

Form& Form::operator=(const Form& copy) {
	if (this  != &copy)
	{
		this->status = copy.getStatus();
	}
	return (*this);
}


std::string Form::getName() const {
	return (this->name);
}

int Form::getRequiredGradeToSign() const {
	return (this->requiredGradeToSign);
}

int  Form::getRequiredGradeToExec() const {
	return (this->requiredGradeToExec);
}

bool Form::getStatus() const {
	return (this->status);
}


void Form::beSigned(Bureaucrat& bureu) {
	if (bureu.getGrade() > this->requiredGradeToSign)
		throw Form::GradeTooLowException();
	this->status = true;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "the grade too high !";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "The grade too low !";
}





std::ostream& operator<< (std::ostream& os, const Form form)  {
	os << "Form Name : " << form.getName();
	os << ", grade required to execute : " << form.getRequiredGradeToExec();
	os << ", grade required to sign : " << form.getRequiredGradeToSign();
	os << ", signed : ";
	if (form.getStatus())
		os << " Yes ";
	else
		os << " No";
	return (os);
}