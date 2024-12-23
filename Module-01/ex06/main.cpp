/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:30:56 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/23 14:45:51 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please enter one arg !" << std::endl;
		return (0);
	}
	Harl myHarl = Harl();
	std::string arg(av[1]);
	
	myHarl.complain(arg);
	return (0);
}