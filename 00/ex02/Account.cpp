/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:42:48 by tpons             #+#    #+#             */
/*   Updated: 2022/01/20 13:30:25 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account ( int initial_deposit ) : _amount(initial_deposit) {
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";created" << std::endl;
}

Account::~Account( void ) {
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";closed" << std::endl;
}

void Account::_displayTimestamp ( void )
{
	time_t timer;
	
	timer = time(NULL);
	tm *time_now = localtime(&timer);

	std::cout 	<< std::setfill('0')
				<< "["
				<< (1900 + time_now->tm_year)
				<< std::setw(2) << (time_now->tm_mon + 1) 
				<< std::setw(2) << time_now->tm_mday
				<< "_"
				<< std::setw(2) << time_now->tm_hour
				<< std::setw(2) << time_now->tm_min
				<< std::setw(2) << time_now->tm_sec
				<< "]";
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout	<< "accounts:" << Account::_nbAccounts
				<< ";total:" << Account::_totalAmount
				<< ";deposits:" << Account::_totalNbDeposits
				<< ";withdrawals:" << Account::_totalNbWithdrawals
				<< std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";p_amount:" << this->_amount - deposit
				<< ";deposit:" << deposit
				<< ";amount:" << this->_amount
				<< ";nb_deposits:" << this->_nbDeposits
				<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	if (_amount - withdrawal >= 0)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout	<< ";p_amount:" << this->_amount + withdrawal
					<< ";withdrawal:" << withdrawal
					<< ";amount:" << this->_amount
					<< ";nb_withdrawals:" << this->_nbWithdrawals
					<< std::endl;
		return (true);
	}
	else
	{
		std::cout	<< ";p_amount:" << this->_amount
					<< ";withdrawal:refused" << std::endl;
		return (false);
	}
}

int		Account::checkAmount( void ) const {
	return (this->_amount);
}

void	Account::displayStatus (void) const {
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals
				<< std::endl;
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}
