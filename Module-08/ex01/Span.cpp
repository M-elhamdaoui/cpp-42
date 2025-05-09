/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:08:35 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/09 08:41:20 by mel-hamd         ###   ########.fr       */
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
    if (this->arr.size() <= 1)
        throw NoSpan();
    std::set<int> st;
    int prev;
    int first = 0;
    long res = *std::max_element(this->arr.begin(), this->arr.end());
    for (std::vector<int>::const_iterator it = this->arr.begin(); it != this->arr.end(); it++)
        st.insert(*it);
    if (st.size() == 1)
        return (0);
    for (std::set<int>::const_iterator it = st.begin(); it != st.end() ; it++)
    {
       if (first == 0)
        {
            prev = *it;
            first = 1;
            continue;
        }
        unsigned int test = *it - prev;
        if (test < res || res < 0)
            res = test;
        prev = *it;
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