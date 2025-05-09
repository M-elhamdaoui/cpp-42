/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 05:55:36 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/05/09 10:01:48 by mel-hamd         ###   ########.fr       */
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



        std::cout << "------------------- std::list-----------" << std::endl;
        std::list<int> lst;
        lst.push_back(1);
        std::cout << "push 1 : " << std::endl;
        std::cout <<  "begin() : " << *lst.begin() << std::endl;
        std::cout <<  "rbegin() : " << *lst.rbegin() << std::endl;
        lst.push_back(3);
        std::cout << "push 3 : " << std::endl;
        std::cout <<  "begin() : " << *lst.begin() << std::endl;
        std::cout <<  "rbegin() : " << *lst.rbegin() << std::endl;
        lst.push_back(4);
        std::cout << "push 3 : " << std::endl;
        std::cout <<  "begin() : " << *lst.begin() << std::endl;
        std::cout <<  "rbegin() : " << *lst.rbegin() << std::endl;
        std::cout << "---------- print stack with reverse iterators : " << std::endl;
        for (std::list<int>::reverse_iterator t = lst.rbegin() ; t != lst.rend(); t++ )
        {
                std::cout << *t << std::endl;
        }
        lst.pop_back();
        std::cout << "pop out top : " << std::endl;
        std::cout <<  "begin() : " << *lst.begin() << std::endl;
        std::cout <<  "rbegin() : " << *lst.rbegin() << std::endl;
        std::cout << "---------- print stack with normal iterators : " << std::endl;
        for (std::list<int>::iterator t = lst.begin() ; t != lst.end(); t++ )
        {
                std::cout << *t << std::endl;
        }
        return 0;
}