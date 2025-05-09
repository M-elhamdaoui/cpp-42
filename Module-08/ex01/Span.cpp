/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:08:35 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/09 18:22:24 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <limits>


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

 Span& Span::operator=(const Span& copy){
    if (this != & copy) {
        this->capacity = copy.getCapacity();
        this->arr = copy.arr;
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
    if (this->arr.size() <= 1)
        throw NoSpan();
    std::vector<int> temp = this->arr;
    std::sort(temp.begin(), temp.end());
    long res = std::numeric_limits<long>::max();
    for (size_t i = 0 ; i < temp.size() - 1; i++) {
       long diff = static_cast<long>(temp[i + 1]) - static_cast<long>(temp[i]); 
        if (diff < res)
            res = diff;
    }
    return (res);
}

unsigned int Span::longestSpan() const {
    if (this->arr.size() <= 1)
        throw NoSpan();
    std::vector<int>::const_iterator max = std::max_element(this->arr.begin(), this->arr.end());
    std::vector<int>::const_iterator min = std::min_element(this->arr.begin(), this->arr.end());
    return (*max - *min);
}

const char* Span::NoSpan::what() const throw() {
    return ("Error no span can be calculated !");
}

const char* Span::FullValues::what() const throw() {
    return ("No space to add !");
}