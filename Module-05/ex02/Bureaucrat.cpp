/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:45:49 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/24 10:44:52 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : name("Default") {
		
		grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.getName()) {
	this->setGrade(copy.getGrade());
}


Bureaucrat::Bureaucrat(std::string name, int grade)  : name(name) {
	this->setGrade(grade);
}

Bureaucrat::~Bureaucrat() {
	
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {
	if (this != &copy) {
		this->setGrade(copy.getGrade());
	}
	return (*this);
}

void 		Bureaucrat::setGrade(int grade) {

	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade = grade;

}

int  		Bureaucrat::getGrade() const {
	return (this->grade);
}

std::string Bureaucrat::getName() const {
	return (this->name);
}

void Bureaucrat::signForm(AForm& form) {
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
		
	}
	catch (const std::exception& ex) {
		std::cout << this->getName() << " couldn’t sign " << form.getName() << " because " << ex.what() << std::endl ;
	}
}

void Bureaucrat::incrementGrade() {
	this->setGrade(this->getGrade() - 1);
}
void Bureaucrat::decrementGrade() {
	this->setGrade(this->getGrade() + 1);
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat bureau) {
	out << bureau.getName() << ", bureaucrat grade " << bureau.getGrade();
	return (out);
}


const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low !");
}


void Bureaucrat::executeForm(AForm const & form) {
	
	try {
		form.execute(*this);
		std::cout <<  this->getName() <<" executed the form : " << form.getName() << std::endl;
	}
	catch (const std::exception& ex) {
		std::cout << this->getName() << " Can´t execute form " << form.getName() << " because " << ex.what() << std::endl;
	}

}