/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 06:45:02 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/24 07:53:34 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

    private :
        std::string target;

    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
        ~ShrubberyCreationForm();


        std::string getTarget() const;
        ShrubberyCreationForm& operator= (conat ShrubberyCreationForm& copy);

}