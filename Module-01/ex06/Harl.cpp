/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 12:07:37 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/23 14:47:25 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void){
	std::cout << "[DEBUG]"<< std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void Harl::info(void){
	std::cout << "[INFO]"<< std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning(void){
	std::cout << "[WARNING]"<< std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month\n" << std::endl;
}

void Harl::error(void){
	std::cout << "[ERROR]"<< std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}


void Harl::complain(std::string level){
	std::string names[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int i = 0;
	while (i < 4)
	{
		if (names[i] == level)
		{
			break;
		}
		i++;
	}
	
	switch (i)
	{
		case 0 :
			this->debug();
		case 1 :
			this->info();
		case 2 :
			this->warning();
		case 3 :
			this->error();
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
			break;
	}
}