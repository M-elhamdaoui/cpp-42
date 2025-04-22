/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:04:24 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/22 16:15:12 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Form {
	private :
		const std::string name;
		bool done;
		const int requiredGradeToSign;
		const int requiredGradeToExec;

	public :
		Form();
		Form(const Form& copy);
		~Form();
		
		Form& operator=(const Form& copy);

	
};