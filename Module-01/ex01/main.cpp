/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:32:18 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/23 16:07:14 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;
	Zombie* zombies = zombieHorde(N, "Mohammed");
	if (!zombies)
		return (0);
	for(int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}