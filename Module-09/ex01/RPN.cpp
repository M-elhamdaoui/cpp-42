/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 06:43:57 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/12 09:32:13 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


RPN::RPN() {

}

RPN::RPN(const RPN& copy) {
    *this = copy;
}

RPN::~RPN() {

}

RPN& RPN::operator=(const RPN& copy) {
    if (this != &copy)
        *this = copy;
    return (*this);
}

void RPN::processRPN(const char* str) {
    std::stringstream ss(str);
    std::string token;
    std::stack<long> st;
    while (std::getline(ss, token, ' ')) {
        if (token.size() != 1)
            throw std::logic_error("Error");
        if (token[0] >= '0' && token[0] <= '9')
            st.push(std::atoi(token.c_str()));
        else if (token == "+" && st.size() > 1)
        {
            long second = st.top();
            st.pop();
            long first = st.top();
            st.pop();
            st.push(first + second);
        }
        else if (token == "-" && st.size() > 1)
        {
            long second = st.top();
            st.pop();
            long first = st.top();
            st.pop();
            st.push(first - second);
        }
        else if (token == "*" && st.size() > 1)
        {
            long second = st.top();
            st.pop();
            long first = st.top();
            st.pop();
            st.push(first * second);
        }
        else if (token == "/" && st.size() > 1)
        {
            long second = st.top();
            st.pop();
            long first = st.top();
            if (second == 0)
                throw std::logic_error("ERROR");
            st.pop();
            st.push(first / second);
        }
        else
            throw std::logic_error("ERROR");
    }
    if (st.size() != 1)
        throw std::logic_error("ERROR");
    std::cout << st.top() << std::endl;
}