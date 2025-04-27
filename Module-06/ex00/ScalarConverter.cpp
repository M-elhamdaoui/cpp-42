#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {

}

ScalarConverter::ScalarConverter( const ScalarConverter& copy) {

}

ScalarConverter::~ScalarConverter() {

}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy) {

}

void ScalarConverter::convert(const std::string& str) {
    std::cout << "char: " << "char here " << std::endl;
    std::cout << "int: " << "int here " << std::endl;
    std::cout << "float: " << "float here " << std::endl;
    std::cout << "double: " << "double here " << std::endl;
}