/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:20:46 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/28 13:33:25 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {

}

ScalarConverter::ScalarConverter( const ScalarConverter& copy) {
        *this = copy;
}

ScalarConverter::~ScalarConverter() {

}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy) {
    if(this != &copy)
        return *this;
    return *this;
}
bool ScalarConverter::checkValid(const std::string& str) {
	int dots = 0;

	if (str[str.length() - 1] != 'f' && (str[str.length() - 1] < '0' || str[str.length() - 1] > '9'))
		return (true);

	for (size_t i = 0; i < str.length() - 1 ; i++) {
		if (str[i] != '.'  && (str[i] < '0' || str[i] > '9'))
			return true;
		if (str[i] == '.')
			dots++;
		if (dots > 1)
			return (true);
	}
	return (false);
}

void ScalarConverter::convert(const std::string& str) {

	char *rest;
    double res = std::strtod(str.c_str(), &rest);
	try {

		    // if (str.length() == 0) {

			// 	std::cout << "int: " << static_cast<int>(res) << std::endl;
        	// 	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(res) << std::endl;
        	// 	std::cout << "double: " << static_cast<double>(res) << std::endl;
			// }
			if (str == "inff" || str =="+inff" || str == "inf" || str =="+inf")
				throw std::string("inf");
			else if (str == "-inf" || str =="-inff")
				throw std::string("-inf");
			else if (str.length() <= 1 && (str[0] < '0' || str[0] > '9')) {
        		if (str[0] < 0 || str[0] > 127) 
        		    std::cout << "char: " << "impossible" << std::endl;
        		else if (str[0] >= 32 && str[0] < 127)
        		    std::cout << "char: " << str << std::endl;
        		else
        		    std::cout << "char: " << "Non displayable" << std::endl;

        		std::cout << "int: " << static_cast<int>(res) << std::endl;
        		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(res) << std::endl;
        		std::cout << "double: " << static_cast<double>(res) << std::endl;
   		 	}
			else if (str.length() == 1 && (str[0] >= '0' || str[0] <= '9')) {
        		std::cout << "char: " << "Non displayable" << std::endl;
        		std::cout << "int: " << static_cast<int>(res) << std::endl;
        		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(res) << std::endl;
        		std::cout << "double: " << static_cast<double>(res) << std::endl;
			}
			else if (str.length() == 1 || str == "nan" || str == "nanf")
				throw  std::string("nan");
			else if (str[0] != '+' && str[0] != '-' && (str[0] < '0' || str[0] > '9'))
				throw std::string("nan");
			else if (checkValid(str))
				throw std::string("nan");
			
	}
	catch (const std::string& err)
	{
		if (err == "nan")
		{
			std::cout << "char: " << "impossible" << std::endl;
    		std::cout << "int: " << "impossible" << std::endl;
   			std::cout << "float: " << "nanf" << std::endl;
    		std::cout << "double: " << "nan" << std::endl;
		}
		if (err == "inf")
		{
			std::cout << "char: " << "impossible" << std::endl;
    		std::cout << "int: " << "impossible" << std::endl;
   			std::cout << "float: " << "inff" << std::endl;
    		std::cout << "double: " << "inf" << std::endl;
		}
		if (err == "-inf")
		{
			std::cout << "char: " << "impossible" << std::endl;
    		std::cout << "int: " << "impossible" << std::endl;
   			std::cout << "float: " << "-inff" << std::endl;
    		std::cout << "double: " << "-inf" << std::endl;
		}
			
	}

   
}