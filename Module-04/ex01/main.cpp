/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 23:41:38 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/09 16:00:35 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void f() {system("leaks animals");}

int main()
{

	atexit(f);
	Animal *animals[10];
	for (int i = 0; i < 5 ; i++)
	{
		animals[i] = new Dog();
	}
	for (int i = 5; i < 10 ; i++)
	{
		animals[i] = new Cat();
	}
	for (int i = 0; i < 10 ; i++) {
		animals[i]->makeSound();
	}
	for (int i = 0; i < 10 ; i++) {
		delete animals[i];
	}
	return (0);
}