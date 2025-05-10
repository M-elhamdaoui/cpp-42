/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 06:33:43 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/10 14:24:52 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <map>
#include <fstream>
#include <sstream>

typedef std::map<std::string, float > kv;

class BitcoinExchange {
    private :
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& copy);
    ~BitcoinExchange();
    BitcoinExchange& operator=(const BitcoinExchange& copy);
    public :
        static kv loadDatabase();
        static void extractDate(int& day, int& month, int& year, const std::string& str);
        static std::string trim(const std::string& str);
        static void validateCharacters(const std::string& str, char c);
        static void validateDateFormat(const std::string& str);
        static bool isLeapYear(const int& year);
        static bool isValidDate(const int& year, const int& month,const int& day);
        static void processFile(const char* filePath, const kv& database);
};