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

void ScalarConverter::convert(const std::string& str) {
    char *rest;
    double res = std::strtod(str.c_str(), &rest);

    if (str.length() == 1) {
        if (str[0] < 0 || str[0] > 127) 
            std::cout << "char: " << "impossible" << std::endl;
        else if (str[0] >= 32 && str[0] < 127)
            std::cout << "char: " << str << std::endl;
        else
            std::cout << "char: " << "Non displayable" << std::endl;

        std::cout << "int: " << static_cast<int>(res) << std::endl;
        std::cout << "float: " << << static_cast<float>(res) << std::endl;
        std::cout << "double: " << static_cast<double>(res) << std::endl;
    }
    // std::cout << "char: " << "char here " << std::endl;
    // std::cout << "int: " << "int here " << std::endl;
    // std::cout << "float: " << "float here " << std::endl;
    // std::cout << "double: " << "double here " << std::endl;
    std::cout << res << std::endl;
}