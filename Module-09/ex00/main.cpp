/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 08:22:09 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/11 06:50:15 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int ac, char** av) {
    try {
        if (ac != 2 && av)
            throw std::logic_error("Your program accept 1 arg !");
        kv data = BitcoinExchange::loadDatabase();
        BitcoinExchange::processFile(av[1], data);
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
        return (1);
    }
    return (0);
}