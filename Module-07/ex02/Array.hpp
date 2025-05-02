/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 08:43:14 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/02 11:01:55 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array {
	private :
		T* arr;
		unsigned int size;
	public :
		Array();
		Array(const Array<T>& copy);
		Array(unsigned int n);
		~Array();

		Array<T>& operator=(const Array<T>& copy);
		
		T& operator[] (unsigned int);
		T& operator[] (unsigned int ) const;

		unsigned int size() const;
};

#include "Array.tpp"