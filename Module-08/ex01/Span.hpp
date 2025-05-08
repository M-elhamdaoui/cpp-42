/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:08:37 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/08 16:25:16 by mel-hamd         ###   ########.fr       */
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