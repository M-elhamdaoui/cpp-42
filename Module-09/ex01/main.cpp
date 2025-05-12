/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 06:44:11 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/12 09:20:02 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char** av) {
    if (ac != 2)
    {
        std::cerr << "Programe takes one argument !" << std::endl;
        return (1);
    }
    try {
        RPN::processRPN(av[1]);
    } catch (const std::exception& ex) {
        std::cerr << ex.what() << std::endl;
        return (1);
    }
    return (0);
}