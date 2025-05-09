/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 05:55:36 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/09 09:18:07 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main () {
        MutantStack<int> mstack;
        mstack.push(1);
        std::cout << "push 1 : " << std::endl;
        std::cout <<  "begin() : " << *mstack.begin() << std::endl;
        std::cout <<  "rbegin() : " << *mstack.rbegin() << std::endl;
        mstack.push(3);
        std::cout << "push 3 : " << std::endl;
        std::cout <<  "begin() : " << *mstack.begin() << std::endl;
        std::cout <<  "rbegin() : " << *mstack.rbegin() << std::endl;
        mstack.push(4);
        std::cout << "push 3 : " << std::endl;
        std::cout <<  "begin() : " << *mstack.begin() << std::endl;
        std::cout <<  "rbegin() : " << *mstack.rbegin() << std::endl;
        std::cout << "---------- print stack with reverse iterators : " << std::endl;
        for (MutantStack<int>::reverse_iterator t = mstack.rbegin() ; t != mstack.rend(); t++ )
        {
                std::cout << *t << std::endl;
        }
        mstack.pop();
        std::cout << "pop out top : " << std::endl;
        std::cout <<  "begin() : " << *mstack.begin() << std::endl;
        std::cout <<  "rbegin() : " << *mstack.rbegin() << std::endl;
        std::cout << "---------- print stack with normal iterators : " << std::endl;
        for (MutantStack<int>::iterator t = mstack.begin() ; t != mstack.end(); t++ )
        {
                std::cout << *t << std::endl;
        }
        return 0;
}