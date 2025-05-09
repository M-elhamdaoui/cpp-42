/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:08:37 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/09 05:42:08 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <vector>
#include <exception>
#include <set>


class Span {
    private :
            std::vector<int> arr;
            unsigned int capacity;
    public :
            Span();
            Span(const Span& copy);
            Span(unsigned int n);
            Span& operator=(const Span& copy);
            ~Span();
            void addNumber(int num);
            
            template <typename T>
            void addNumber(T start, T end) {
                unsigned int sizeToInsert = std::distance(start, end);
                if (this->capacity > this->arr.size() + sizeToInsert)
                    throw FullValues();
                this->arr.insert(this->arr.end(), start, end);
            }

            int shortestSpan() const;
            int longestSpan() const;
            
            unsigned int getCapacity() const;

            class NoSpan : public std::exception {
                public :
                    const char* what() const throw() {
                        return ("Error no span can be calculated !");
                    }
            };
            class FullValues : public std::exception {
                public :
                    const char* what() const throw() {
                        return ("No space to add !");
                    }
            };
};