/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 08:43:22 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/02 11:10:46 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() {
	this->arr = new T[0];
	this->size = 0;
}

template <typename T>
Array<T>::Array(const Array<T>& copy) {
	
	this->arr = new T[copy.size()];
	this->size = copy.size();
	for (unsigned int i = 0; i < this->size(); i++)
	{
		arr[i] = copy[i];
	}
}

template <typename T>
Array<T>::Array(unsigned int n) {
	
	this->arr = new T[n];
	this->size = n;
}

template <typename T>
Array<T>::~Array() {
	
}


template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& copy) {
	
	if (this != &copy) {
		delete[] this->arr;
		this->arr = new T[copy.size()];
		this->size = copy.size();
		for (unsigned int i = 0; i < this->size(); i++)
		{
			arr[i] = copy[i];
		}
	}
	return (*this);
}