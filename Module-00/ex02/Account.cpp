/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:32:08 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/14 11:54:38 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


void Account::_displayTimestamp()
{
	struct tm* localtime; 
	
	std::time_t now = std::time(NULL);
	localtime = std::localtime(&now);
	std::cout << "[" << std::setw(4) << std::setfill('0')<< localtime->tm_year + 1900;
	std::cout << std::setw(2) << std::setfill('0')<< localtime->tm_mon + 1;
	std::cout<< std::setw(2) << std::setfill('0')<< localtime->tm_mday << "_";
	std::cout << std::setw(2) << std::setfill('0') << localtime->tm_hour;
	std::cout << std::setw(2) << std::setfill('0')<< localtime->tm_min ;
	std::cout << std::setw(2) << std::setfill('0')<< localtime->tm_sec << "] ";
	
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount() << ";closed"<< std::endl ;
	Account::_nbAccounts --;
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

void Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:"<< Account::getNbAccounts() << ";total:"<<Account::getTotalAmount();
	std::cout << ";deposits:"<< Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit)
{
	_displayTimestamp();
	if (deposit < 0)
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount();
		std::cout << ";deposit:refused" << std::endl;
		return;
	}
	this->_nbDeposits += 1;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->checkAmount();
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << this->_amount + deposit;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (withdrawal < 0 || (this->_amount - withdrawal < 0))
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount();
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->checkAmount();
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << this->_amount - withdrawal ;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	return (true);
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void Account::displayStatus() const
{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount() << ";deposits:";
		std::cout << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
