/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Transfer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 10:47:20 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/21 16:47:17 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRANSFER_HPP
#define TRANSFER_HPP

#include <iostream>
#include <fstream>

class Transfer {
    private :
        std::string inputFile;
        std::string s1;
		 std::string s2;
    public :
        Transfer(std::string inputFile, std::string s1, std::string s2);
        void transferData();
};

#endif 