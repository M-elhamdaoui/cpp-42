/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:20:46 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/29 16:45:12 by mel-hamd         ###   ########.fr       */
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
		if (str[i] == '.' && (str[i + 1] < '0' || str[i + 1] > '9'))
			return (true);
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
        		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
        		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(str[0]) << "f" << std::endl;
        		std::cout << "double: " << std::fixed << std::setprecision(1)  << static_cast<double>(str[0]) << std::endl;
   		 	}
			else if (str.length() == 1 && (str[0] >= '0' || str[0] <= '9')) {
        		std::cout << "char: " << "Non displayable" << std::endl;
        		std::cout << "int: " << static_cast<int>(res) << std::endl;
        		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(res)  << "f" << std::endl;
        		std::cout << "double: "<< std::fixed << std::setprecision(1)  << static_cast<double>(res) << std::endl;
			}
			else if (str.length() == 1 || str == "nan" || str == "nanf")
				throw  std::string("nan");
			else if (str[0] != '+' && str[0] != '-' && (str[0] < '0' || str[0] > '9'))
				throw std::string("nan");
			else if (checkValid(str))
				throw std::string("nan");
			else
			{
				if (res > std::numeric_limits<char>::max() || res < std::numeric_limits<char>::min())
					std::cout << "char: " << "impossible" << std::endl;
				else if (res >= 32 && res < 127)
        		    std::cout << "char: " << static_cast<char>(res) << std::endl;
        		else
        		    std::cout << "char: " << "Non displayable" << std::endl;
	
				if (res > std::numeric_limits<int>::max() || res < std::numeric_limits<int>::min())
					std::cout << "int: " << "impossible" << std::endl;
				else
        		    std::cout << "int: " << static_cast<int>(res) << std::endl;
				
				if (res > std::numeric_limits<float>::max() || res < std::numeric_limits<float>::min())
					std::cout << "float: " << "impossible" << std::endl;
				else 
        		    std::cout << "float: " << std::fixed << std::setprecision(1)  << static_cast<float>(res) << "f" << std::endl;

				if (res > std::numeric_limits<double>::max() || res < std::numeric_limits<double>::min())
					std::cout << "double: " << "impossible" << std::endl;
				else 
        		    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(res) << std::endl;
			}
				
			
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