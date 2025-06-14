/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:30:16 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/26 12:43:20 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"



AForm::AForm() : name("Dedault"), requiredGradeToSign(150) , requiredGradeToExec(150) {
	this->status = false;
}


AForm::AForm(std::string name, int lowToSin, int lowToExec) : name(name),  requiredGradeToSign(lowToSin), requiredGradeToExec(lowToExec) {
	this->status = false;
}


AForm::AForm(const AForm& copy) : name(copy.getName()), requiredGradeToSign(copy.getRequiredGradeToSign()), requiredGradeToExec(copy.getRequiredGradeToExec()) {
	this->status = copy.getStatus();
}

AForm::~AForm() {

}

AForm& AForm::operator=(const AForm& copy) {
	if (this  != &copy)
	{
		this->status = copy.getStatus();
	}
	return (*this);
}


std::string AForm::getName() const {
	return (this->name);
}

int AForm::getRequiredGradeToSign() const {
	return (this->requiredGradeToSign);
}

int  AForm::getRequiredGradeToExec() const {
	return (this->requiredGradeToExec);
}

bool AForm::getStatus() const {
	return (this->status);
}


void AForm::beSigned(const Bureaucrat& bureu) {
	if (bureu.getGrade() > this->requiredGradeToSign)
		throw AForm::GradeTooLowException();
	this->status = true;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "the grade too high !";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "The grade too low !";
}


const char* AForm::FormNotSigned::what() const throw() {
	return ("trying to execute form not signed yet !");
}




std::ostream& operator<< (std::ostream& os, const AForm& form)  {
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