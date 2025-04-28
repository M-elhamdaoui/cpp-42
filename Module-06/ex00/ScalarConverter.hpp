/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 08:26:05 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/28 08:04:45 by mel-hamd         ###   ########.fr       */
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
            
            static void convert(const std::string& str);
};