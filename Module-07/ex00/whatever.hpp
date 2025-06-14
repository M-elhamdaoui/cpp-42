/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 07:52:35 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/01 08:00:50 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


template <typename T> 
void swap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}


template <typename T>
T max(T a, T b) {
	return a > b ? a : b;
};

template <typename T>
T min(T a, T b) {
	return a > b ? b : a;
}

