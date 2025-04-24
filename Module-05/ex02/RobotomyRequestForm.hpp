/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 08:24:31 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/24 08:25:15 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

    private :
        std::string target;

    public :
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& copy);
        ~RobotomyRequestForm();


        std::string getTarget() const;
        RobotomyRequestForm& operator= (conat RobotomyRequestForm& copy);

}