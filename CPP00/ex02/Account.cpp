/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   missingfile.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-12 16:58:00 by mmaghri           #+#    #+#             */
/*   Updated: 2024-07-12 16:58:00 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "iostream"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) 
{
    _accountIndex = _nbAccounts; 
    _nbAccounts++; 
    _totalAmount += initial_deposit;  
    _amount = initial_deposit; 
    _nbDeposits = 0; 
    _nbWithdrawals = 0; 
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void )
{
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed"  << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    _nbDeposits++;
    _totalAmount += deposit; 
    _totalNbDeposits++;
    std::cout << "index:" << _accountIndex << ";p_amount:"  << _amount << ";deposit:" << deposit ;
    _amount += deposit; 
    std::cout << ";amount:" << _amount << " ;nb_deposits:" <<_nbDeposits << std::endl ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    if (_amount - withdrawal >= 0)
    {
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        _amount -= withdrawal;
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return (1);
    }
    else
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return (0);
    }
}
int		Account::checkAmount( void ) const
{
    return (1);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
    std::time_t time = std::time(nullptr);
    tm *ltm = std::localtime(&time);
    std::cout << "[" << std::setfill('0') << ltm->tm_year + 1900
                     << std::setw(2) << ltm->tm_mon + 1
                     << std::setw(2) << ltm->tm_mday 
                     << std::setw(2) << "_" 
                     << std::setw(2) << ltm->tm_hour 
                     << std::setw(2) << ltm->tm_min 
                     << std::setw(2) << ltm->tm_sec 
                     << "] ";
}



int Account::getNbAccounts( void )
{
    return (_nbAccounts);
}


int Account::getTotalAmount( void )
{
    return (_totalAmount);
}


int Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}


int Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}


void Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}