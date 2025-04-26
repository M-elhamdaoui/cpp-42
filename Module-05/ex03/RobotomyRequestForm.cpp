/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 08:24:23 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/26 13:00:53 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm("Dfeault Robotomy request Form", 72, 45 ) {
    this->target = "Default";
}


RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy request form", 72, 45) {
    this->target = target;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy.getName(), copy.getRequiredGradeToSign(), copy.getRequiredGradeToExec()) {
    this->target = copy.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm() {
    
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& copy) {
    if (this != &copy) {
        this->target = copy.getTarget();
    }
    return (*this);
}

std::string RobotomyRequestForm::getTarget() const {
    return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (executor.getGrade() > this->getRequiredGradeToExec())
        throw  RobotomyRequestForm::GradeTooLowException();
    if (this->getStatus() == false )
        throw RobotomyRequestForm::FormNotSigned();
    std::cout << "Some drilling noises... " << std::endl;
    std::srand(std::time(0));
    int num = std::rand();

    if (num % 2)
        std::cout << this->getTarget() << " has been robotomized successfully 50% of the time" << std::endl;
    else
        std::cout << "The robotomy failed." << std::endl;
}