/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 06:33:50 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/10 09:12:26 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinEchange::BitcoinEchange() {

}
BitcoinEchange::BitcoinEchange(const BitcoinEchange& copy) {
    *this = copy;
}
BitcoinEchange::~BitcoinEchange() {

}
BitcoinEchange& BitcoinEchange::operator=(const BitcoinEchange& copy) {
    if (this != &copy)
        return (*this);
    return (*this);
}

kv BitcoinEchange::loadDatabase() {
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
    return res; 
}  