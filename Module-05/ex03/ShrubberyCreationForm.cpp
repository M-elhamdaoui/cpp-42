/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 06:58:07 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/26 13:00:53 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Dfeault Shrubbery creation Form", 145, 137) {
    this->target = "Default";
}


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery creation form", 145, 137) {
    this->target = target;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy.getName(), copy.getRequiredGradeToSign(), copy.getRequiredGradeToExec()) {
    this->target = copy.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& copy) {
    if (this != &copy) {
        this->target = copy.getTarget();
    }
    return (*this);
}

std::string ShrubberyCreationForm::getTarget() const {
    return (this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (executor.getGrade() > this->getRequiredGradeToExec())
        throw  ShrubberyCreationForm::GradeTooLowException();
    if (this->getStatus() == false)
        throw ShrubberyCreationForm::FormNotSigned();
    std::string fileName = this->getTarget() + "_shrubbery";
    std::ofstream file(fileName.c_str());
    if (!file)
        return ;
    file << "           \\/ |    |/ "<< std::endl;
    file << "        \\/ / \\||/  /_/___/_" << std::endl;
    file << "         \\/   |/ \\/" << std::endl;
    file << "    _\\__\\_\\   |  /_____/_" << std::endl;
    file << "           \\  | /          /" << std::endl;
    file << " __ _-----`  |{,-----------~" << std::endl;
    file << "            \\ }{" << std::endl;
    file << "             }{{ " << std::endl;
    file << "             }}{" << std::endl;
    file << "             {{}" << std::endl;
    file << "       , -=-~{ .-^- _"  << std::endl;
    file.close();
}