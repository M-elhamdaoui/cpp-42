/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:32:17 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/09 17:48:53 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>
#include <vector>
#include <list>

template <typename T>

int easyfind(const T& arr, int value);

class NotFound : public std::exception {
    public :
        const char* what() const throw();
};


#include "easyfind.tpp"