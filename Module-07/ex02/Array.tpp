/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 08:43:22 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/02 16:04:15 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() {
	this->arr = new T[0];
	this->length = 0;
}

template <typename T>
Array<T>::Array(const Array<T>& copy) {
	
	this->arr = new T[copy.size()];
	this->length = copy.size();
	for (unsigned int i = 0; i < this->size(); i++)
	{
		arr[i] = copy[i];
	}
}

template <typename T>
Array<T>::Array(unsigned int n) {
	
	this->arr = new T[n];
	this->length = n;
}

template <typename T>
Array<T>::~Array() {
	delete[] this->arr;
}


template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& copy) {
	
	if (this != &copy) {
		delete[] this->arr;
		this->arr = new T[copy.size()];
		this->length = copy.size();
		for (unsigned int i = 0; i < this->size(); i++)
		{
			arr[i] = copy[i];
		}
	}
	return (*this);
}

template <typename T>
T& Array<T>::operator[] (unsigned int pos) {
	if (pos >= this->size())
		throw std::out_of_range("Invalid range !");
	return this->arr[pos];
}

template <typename T>
T& Array<T>::operator[] (unsigned int pos) const {
	if (pos >= this->size())
		throw std::out_of_range("Invalid range !");
	return this->arr[pos];
}

template <typename T>
unsigned int Array<T>::size() const {
	return this->length;
}