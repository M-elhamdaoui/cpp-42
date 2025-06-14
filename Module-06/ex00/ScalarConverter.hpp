/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 08:26:05 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/28 13:21:41 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>

class ScalarConverter {
        private :
            ScalarConverter();
        public :
            ScalarConverter(const ScalarConverter& copy);
            ~ScalarConverter();
            ScalarConverter& operator=(const ScalarConverter& copy);
            
			static bool checkValid(const std::string& str);
            static void convert(const std::string& str);
};