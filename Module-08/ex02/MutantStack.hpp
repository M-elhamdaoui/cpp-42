/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 05:55:33 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/09 06:43:54 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <vector>
#include <list>

template <class T>

class MutantStack : public std::stack<T>  {
    private :

    public :
        MutantStack();
        MutantStack(const MutantStack& copy);
        ~MutantStack();

        MutantStack& operator=(const MutantStack& copy);
        
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        
        iterator begin();
        const_iterator begin() const;

        iterator end();
        const_iterator end() const;
};

#include "MutantStack.tpp"