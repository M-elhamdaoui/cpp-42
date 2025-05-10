/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 08:22:09 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/10 15:20:26 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int ac, char** av) {
    try {
        if (ac != 2 && av)
            throw std::logic_error("Your program accept 1 arg !");
        kv data = BitcoinExchange::loadDatabase();
        // double res  = std::strtof("10242.43", NULL);
        // std::cout << std::fixed << std::setprecision(4) << res << std::endl;;
        BitcoinExchange::processFile(av[1], data);
        // for (std::map<std::string, float>::iterator it = data.begin() ; it != data.end() ; it++)
        // {
        //     std::cout << "Key : " << it->first << ", value : " << std::fixed << std::setprecision(2) << it->second<< std::endl;
        // }
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
        return (1);
    }
    return (0);
}