/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:08:35 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/08 15:06:29 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span() {
    this->capacity = 0;
}

Span::Span(unsigned int n) {
    this->capacity = n;
}

Span::Span(const Span& copy) {
    *this = copy;
}

Span::~Span() {
    
}

 Span& Span::operator=(const Span& copy) {
    if (this != & copy) {
        this->capacity = copy.getCapacity();
    }
    return (*this);
 }

 unsigned int Span::getCapacity() const {
    return this->capacity;
 }

void Span::addNumber(int num) {
    if (this->arr.size() == capacity)
        throw FullValues();
    this->arr.push_back(num);
}