/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 06:10:21 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/26 08:40:49 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern () {

}

Intern::Intern(const Intern& copy) {
    if (copy)
        return ;
}

Intern::~Intern() {

}

Intern& operator=(const Intern& copy) {
    if (this != &copy)
        return (*this);
    return (*this);
}

AForm* Intern::makeForm(const std::string& name, const std::string& target) {
    std::string names[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    AForm* forms[3] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
    
    for (int i = 0 ; i < 3 ; i++)
    {
        if (name == name[i]) {
            break;
        }
    }
    if (i < 3)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j != i)
                delete forms[j]
        }
        return forms[i];
    }
    return (NULL);
}