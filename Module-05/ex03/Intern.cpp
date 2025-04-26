/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 06:10:21 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/26 09:17:20 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern () {

}

Intern::Intern(const Intern& copy) {
    if (&copy != this)
        return ;
}

Intern::~Intern() {

}

Intern& Intern::operator=(const Intern& copy) {
    if (this != &copy)
        return (*this);
    return (*this);
}

AForm* Intern::makeForm(const std::string& name, const std::string& target) {
    std::string names[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    AForm* forms[3] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
    int i = 0;

    while (i < 3)
    {
        if (name == names[i]) {
            break;
        }
        i++;
    }
    if (i < 3)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j != i)
                delete forms[j];
        }
        std::cout << "Intern creates " << forms[i]->getName() << std::endl;
        return forms[i];
    }
    for (int j = 0; j < 3; j++) {
        delete forms[j];
    }
    std::cout << "Intern can't create " <<  name << " form" << std::endl;
    return (NULL);
}