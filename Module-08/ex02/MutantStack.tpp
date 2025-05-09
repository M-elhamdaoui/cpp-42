/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 06:43:27 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/09 09:06:19 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {

}
template <typename T>
MutantStack<T>::MutantStack(const MutantStack& copy) : std::stack<T>(copy) {

}
template <typename T>
MutantStack<T>::~MutantStack() {

}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& copy) {
    if (this != &copy)
        *this = copy;
    return (*this);
}

template <typename T>
 typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return (std::stack<T>::c.begin());
}
template <typename T>
 typename MutantStack<T>::const_iterator  MutantStack<T>::begin() const {
    return (std::stack<T>::c.begin());
 }

 template <typename T>
 typename MutantStack<T>::iterator MutantStack<T>::end() {
    return (std::stack<T>::c.end());
}
template <typename T>
 typename MutantStack<T>::const_iterator  MutantStack<T>::end() const {
    return (std::stack<T>::c.end());
 }


 template <typename T>
 typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {
    return (std::stack<T>::c.rbegin());
}
template <typename T>
 typename MutantStack<T>::const_reverse_iterator  MutantStack<T>::rbegin() const {
    return (std::stack<T>::c.rbegin());
 }

 template <typename T>
 typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {
    return (std::stack<T>::c.rend());
}
template <typename T>
 typename MutantStack<T>::const_reverse_iterator  MutantStack<T>::rend() const {
    return (std::stack<T>::c.rend());
 }