/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 09:49:27 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/16 10:44:47 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << "Create a zombie (A) in heap :" <<std::endl;
	Zombie* zombie =  newZombie("A");
	
	zombie->announce();
	delete zombie;
	
	std::cout << "Create a zombie (B) in stack :" <<std::endl;
	randomChump("B");
}