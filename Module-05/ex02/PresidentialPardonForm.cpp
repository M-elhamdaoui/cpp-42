/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 08:48:41 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/26 12:43:39 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("Default Presidential pardon form", 25, 5)  {
    this->target = target; 
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential pardon form", 25, 5) {
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy.getName(), copy.getRequiredGradeToSign(), copy.getRequiredGradeToExec()) {
    this->target = copy.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm() {

}



PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy) {
    if (this != &copy)
    {
        this->target = copy.getTarget();
    }
    return (*this);
}

std::string PresidentialPardonForm::getTarget() const {
    return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (executor.getGrade() > this->getRequiredGradeToExec())
        throw  PresidentialPardonForm::GradeTooLowException();
    if (this->getStatus() == false )
        throw PresidentialPardonForm::FormNotSigned();
    std::cout << this->getTarget() << "  has been pardoned by Zaphod Beeblebrox." << std::endl;
}