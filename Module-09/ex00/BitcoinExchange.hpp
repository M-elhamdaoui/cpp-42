/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 06:33:43 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/10 09:02:42 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <map>
#include <fstream>
#include <sstream>

typedef std::map<std::string, float > kv;

class BitcoinEchange {
    private :
    BitcoinEchange();
    BitcoinEchange(const BitcoinEchange& copy);
    ~BitcoinEchange();
    BitcoinEchange& operator=(const BitcoinEchange& copy);
    public :
        static kv loadDatabase();
        static std::string trim(const std::string& str);
        static bool isLeapYear(const int& year);
        static bool isValidDate(const int& year, const int& month,const int& day);
        static void processFile(const std::string& file, const kv& database);
};