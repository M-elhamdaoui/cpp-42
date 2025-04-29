/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:27:07 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/29 12:34:36 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
	Data data;

	data.content = "Hello world";

	std::cout << "Data address : " << &data << std::endl;
	std::cout << "Data content : " << data.content << std::endl;

	uintptr_t  ptr = Serializer::serialize(&data);
	std::cout << "Serialized ptr address : " << &ptr << std::endl;
	std::cout << "Serialized ptr content : " << ptr << std::endl;

	Data *data_ptr = Serializer::deserialize(ptr); 

	std::cout << "Data address : " << data_ptr << std::endl;
	std::cout << "Data content : " << data_ptr->content << std::endl;
	
	return (0);
}