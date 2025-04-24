/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 08:39:45 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/24 08:48:17 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"


class PresidentialPardonForm : public AForm {

    private :
        std::string target;
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& copy);
        ~PresidentialPardonForm();

        std::string getTarget() const;
        PresidentialPardonForm operator= (const PresidentialPardonForm& copy);
};