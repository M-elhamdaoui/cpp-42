/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:15:09 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/29 16:13:31 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"


int main() 
{
	Base* base = generate();


	identify(base);
	identify(*base);
	delete(base);
	return (0);
}