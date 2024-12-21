/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Transfer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 10:46:46 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/21 16:59:44 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include  "Transfer.hpp"


Transfer::Transfer(std::string inputFile, std::string s1,  std::string s2)
{
    this->inputFile =  inputFile;
    this->s1 = s1;
	this->s2 = s2;
}


void    Transfer::transferData()
{
    std::ifstream inFile(this->inputFile);
    if (!inFile)
    {   
        std::cout << "Cant open file : " << this->inputFile << std::endl;
        return ;
    }
    std::ofstream outFile(this->inputFile + ".replace");
	
    if (!outFile)
    {   
        std::cout << "Cant open file : " << this->inputFile + ".replace" << std::endl;
        return ;
    }

    std::string line = "";

    while (!std::getline(inFile, line).eof())
    {
        std::string res;
        size_t  pos;
        size_t  found;

        pos = 0;
        while ((found = line.find(this->s1, pos)) != std::string::npos)
        {
            res += line.substr(pos, found);
            res += this->s2;
            pos = found + this->s1.length();
        }
        res += line.substr(pos);
        outFile << res << std::endl;
    }
    inFile.close();
    outFile.close();
}
