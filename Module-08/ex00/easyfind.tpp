/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:41:58 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/10 05:51:50 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>

int easyfind(const T& arr, int value) {
    typename T::const_iterator it = std::find(arr.begin(), arr.end(), value);
    if (it == arr.end())
        throw std::logic_error("Value not found !");
    return (*it);
}
