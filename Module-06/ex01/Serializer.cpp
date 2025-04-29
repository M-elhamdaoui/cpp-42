/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 06:21:46 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/29 11:47:58 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer::Serializer() {

}

Serializer::Serializer(const Serializer& copy) {
	*this = copy;
}

Serializer::~Serializer() {

}

Serializer& Serializer::operator=(const Serializer& copy) {
	if (this != &copy ) 
		return (*this);
	return (*this);
}


uintptr_t Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}