/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Transfer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 10:46:46 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/21 11:54:05 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include  "Input.hpp"


TRANSFER::TRANSFER(std::string inputFile, std::string outputFile)
{
    this->inputFile =  inputFile;
    this->outoutFile = outputFile;
}


void    TRANSFER::transferData()
{
    std::ifstream inFile(this->inputFile);
    if (!inFile)
    {   
        std::cout << "Cant open file : " << this->inputFile << std::endl;
        return ;
    }
    std::ofstream outFile(this->outputFile)
    if (!outFile)
    {   
        std::cout << "Cant open file : " << this->outputFile << std::endl;
        return ;
    }

    std::string line;

    while (!getline(inFile, line).eof())
    {
        std::string res;
        size_t  pos;
        size_t  found;

        pos = 0;
        while ((found = line.find(this->inputFile, pos)) != std::string::npos)
        {
            res += line.substr(pos, found);
            res += this->outputFile;
            pos = found + this->inputFile.length();
        }
        res += line.substr(pos);
        outFile << res << std::endl;
    }
    inFile.close();
    outFile.close();
}
