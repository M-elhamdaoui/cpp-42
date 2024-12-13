/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:32:08 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/13 16:26:41 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


void Account::_displayTimestamp()
{
	struct tm* localtime; 
	
	std::time_t now = std::time(NULL);
	localtime = std::localtime(&now);
	std::cout << "[" << localtime->tm_year << localtime->tm_mon << localtime->tm_mday << "_";
	std::cout  << localtime->tm_hour << localtime->tm_min << localtime->tm_sec << "] ";
	
}

Account::Account( int initial_deposit  )
{
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_nbAccounts << ";amount:" << initial_deposit << ";created"<< std::endl ;
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
}

int Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount()
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}
int Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}

