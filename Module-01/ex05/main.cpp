/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 11:05:19 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/23 12:51:54 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl myHarl = Harl();

	myHarl.complain("DEBUG");
	myHarl.complain("INFO");
	myHarl.complain("WARNING");
	myHarl.complain("ERROR");
	myHarl.complain("diojdiod");
}