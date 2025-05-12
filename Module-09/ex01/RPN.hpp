/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 06:44:01 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/12 08:35:48 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <sstream>
#include <iostream>
#include <stack>

class RPN {
    private :
        RPN();
        RPN(const RPN& copy);
        ~RPN();
        RPN& operator=(const RPN& copy);
    public :
        static void processRPN(const char* str);
};