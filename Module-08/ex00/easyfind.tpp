/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:41:58 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/08 12:05:50 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>

int easyfind(const T& arr, int value) {
    typename T::const_iterator it = std::find(arr.begin(), arr.end(), value);
    if (it == arr.end())
        throw NotFound();
    return (*it);
}
