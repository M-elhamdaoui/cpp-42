/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 06:10:02 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/26 07:02:37 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern {
    private:
    
    public :
        Intern();
        Intern(const Intern& copy);
        ~Intern();
        Intern& operator=(const Intern& copy);

        AForm* makeForm(const std::string& name, const std::string& target);
};