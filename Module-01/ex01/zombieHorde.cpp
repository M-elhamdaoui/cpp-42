/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:01:23 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/16 11:38:15 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (NULL);
	Zombie* zombies = new Zombie[N];
	
	for(int i = 0; i < N; i++)
	{
		zombies[i].setName(name);
	}
	return (zombies);
}