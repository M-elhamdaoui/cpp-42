/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 10:22:10 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/21 16:54:41 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Transfer.hpp"


int  main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Please enter 3 parameters !" << std::endl;
		return (0);
	}
	std::string infile = std::string(av[1]);
	std::string s1 = std::string(av[2]);
	std::string s2 = std::string(av[3]);
	Transfer trans(infile, s1, s2);

	trans.transferData();
	
}