/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 23:41:38 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/09 12:23:41 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "\n------------------------------\n" << std::endl;
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* catt = new WrongCat();
	std::cout << wrong->getType() << " " << std::endl;
	std::cout << catt->getType() << " " << std::endl;
	catt->makeSound();
	wrong->makeSound();
	return (0);
}