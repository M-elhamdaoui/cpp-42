/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 08:50:51 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/01 11:05:48 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>


template <typename T,  typename V>
void iter(T* arr, size_t length, V f) {
	
	for (size_t i = 0;  i < length; i++) {
		f(arr[i]);
	}
};