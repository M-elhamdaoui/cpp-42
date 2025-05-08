/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:08:35 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/08 15:33:09 by mel-hamd         ###   ########.fr       */
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


unsigned int Span::shortestSpan() const {
    return (0);
}

unsigned int Span::longestSpan() const {
    if (this->arr.size() <= 1)
        throw NoSpan();
    std::vector<int>::const_iterator max = std::max_element(this->arr.begin(), this->arr.end());
    std::vector<int>::const_iterator min = std::min_element(this->arr.begin(), this->arr.end());
    return (*max - *min);
}