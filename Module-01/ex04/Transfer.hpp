/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Transfer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 10:47:20 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/21 11:35:17 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRANSFER_HPP
#define TRANSFER_HPP

#include <iostream>

class TRANSFER {
    private :
        std::string inputFile;
        std::string outputFile;
    public :
        TRANSFER(std::string inputFile, std::string outputFile);
        void transferData();
};

#endif 