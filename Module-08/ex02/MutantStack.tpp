/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 06:43:27 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/09 06:58:54 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <class T>
MutantStack<T>::MutantStack() {

}
template <class T>
MutantStack<T>::MutantStack(const MutantStack& copy) : std::stack<T>(copy) {

}
template <class T>
MutantStack<T>::~MutantStack() {

}

template <class T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& copy) {
    if (this != &copy)
        *this = copy;
    return (*this);
}

template <class T>
 MutantStack<T>::iterator MutantStack<T>::begin() {
    return (c.begin());
}
template <class T>
 MutantStack<T>::const_iterator  MutantStack<T>::begin() const {
    return (c.begin());
 }

 template <class T>
 MutantStack<T>::iterator MutantStack<T>::end() {
    return (c.end());
}
template <class T>
 MutantStack<T>::const_iterator  MutantStack<T>::end() const {
    return (c.end());
 }