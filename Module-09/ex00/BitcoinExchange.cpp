/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 06:33:50 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/10 16:22:18 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {

}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy) {
    *this = copy;
}
BitcoinExchange::~BitcoinExchange() {

}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& copy) {
    if (this != &copy)
        return (*this);
    return (*this);
}

kv BitcoinExchange::loadDatabase() {
    kv res;
    std::ifstream file("./data.csv");
    std::string line;
    if (!file)
        throw std::logic_error("Can't locate or open data.csv !");
    getline(file, line);
    while (getline(file, line))
     {
        char *ptr;
        std::string first;
        std::string second;
        std::stringstream ss(line);
        getline(ss,first, ',');
        getline(ss,second, ',');
        res.insert(std::make_pair(first, std::strtof(second.c_str(), &ptr)));
     }
     file.close();
    return res; 
} 

void BitcoinExchange::processFile(const char* filePath, const kv& database) {
    std::fstream file(filePath);
    std::string line;
    (void)database;
    if (!file)
        throw std::logic_error(std::string("Cant open file '") + std::string(filePath) + std::string("' !") );    
    getline(file, line);
    if (line != "date | value")
        throw std::logic_error("Invalid header in file !");
    while (getline(file, line)) {
        try
        {
            BitcoinExchange::validateCharacters(line, '|');
            int count = 0;
            std::string part;
            kv parsedFile;
            std::stringstream ss(line);
            while (getline(ss, part, '|'))
            {
                part = BitcoinExchange::trim(part);
                int day = 0;
                int month = 0; 
                int year = 0 ;
                if (count == 2)
                    throw std::logic_error(std::string("bad input => ") + line);
                if (count == 0)
                {
                    try {
                        BitcoinExchange::validateCharacters(part, '-');
                        BitcoinExchange::extractDate(day, month, year, part);
                    } catch (const std::exception& e)
                    {
                            if (e.what())
                                throw std::logic_error(std::string("bad input => ") + line);
                    }
                    if (BitcoinExchange::isValidDate(year, month, day))
                        std::cout << part << " is valid !" << std::endl;
                    else
                        throw std::logic_error(std::string("bad input => ") + line);
                    // std::cout << year << "-" << month << "-" << day << std::endl; 
                }
                count++;
            }
            if (count == 1)
                 throw std::logic_error(std::string("bad input => " + line));
        }
        catch(const std::exception& e)
        {
            std::cerr << "Error: " << e.what() << '\n';
        }
        
    }
    file.close();
}


void BitcoinExchange::extractDate(int& day, int& month, int& year, const std::string& str) {
    
    std::stringstream ss(str);
    std::string part;
    int count = 0;
    while (getline(ss, part, '-'))
    {
        if (count > 2)
        {
            throw std::logic_error("more than 3 parts in date");
        }
        if (count == 0 && part.size() != 4)
            throw std::logic_error("more than 4 digits in year");
        else if (count != 0 && part.size() != 2)
        {
            throw std::logic_error("more than 2 digits in month or day");
        }
        for (size_t i = 0 ; i < part.size() ; i++)
        {
            if (part[i] < '0' || part[i] > '9')
                throw std::logic_error("there is a character not number");
        }
        if (count == 0)
            year = std::atoi(part.c_str());
        else if (count == 1)
            month = std::atoi(part.c_str());
        else
            day = std::atoi(part.c_str());
        count++;
    }
    
}

std::string BitcoinExchange::trim(const std::string& str) {
    size_t start = str.find_first_not_of(" \t");
    size_t end = str.find_last_not_of(" \t") + 1;
    std::string res =  str.substr(start, end);
    return res;
 }


void BitcoinExchange::validateCharacters(const std::string& str, char c) {
    int count = 0;
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] == c)
            count++;
    }
    if (c == '-' && count != 2)
        throw std::logic_error(std::string("bad input => ") + str);
    if (c == '|' && count != 1)
         throw std::logic_error(std::string("bad input => ") + str);
}

bool BitcoinExchange::isValidDate(const int& year, const int& month,const int& day) {
    if (day < 1 || day > 31)
        return (false);
    if (month < 1 || month > 12)
        return (false);
    if (month == 2 && day > 29)
        return (false);
    if (BitcoinExchange::isLeapYear(year) && month == 2 && day > 28)
        return (false);
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return (false);
    return (true);
}

bool BitcoinExchange::isLeapYear(const int& year) {
    if (year % 4 == 0)
    {
        if (year % 100 != 0)
            return (1);
        if (year % 400 == 0)
            return (1);
    }
    return (0);
}

// void BitcoinExchange::validateFormat(const std::string& str) {
//     int count = 0;
//     for (size_t i = 0 ; i < str.size() ; i++) {
            
//         if (str[i] == '|')
//             count++;
//     }
// }