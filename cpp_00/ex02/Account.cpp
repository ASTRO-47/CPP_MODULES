#include "Account.hpp"
# include <iostream>
# include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


// getting the time from 1970's then convert it to [YYYYMMDD_HHMMSS]

void Account::_dispalyTimestamp()
{
    std::time_t curremt_time = std::time(NULL);
    struct tm* local_time = std::localtime(&curremt_time);
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", local_time);
    std::cout << buffer << " ";
}

int     Account::getNbAccounts()
{
    return (_nbAccounts);
}
// display the insfos about the initialazed object
Account::Account(int initial_deposit)
{
    this->_dispalyTimestamp();   
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    std::cout << "index:" << this->_accountIndex << ';';
    std::cout << "amount:" << this->_amount << ';';
    std::cout << "created" << std::endl;
    _nbAccounts++;
    _totalAmount += initial_deposit;

}

int Account::checkAmount() const
{
    return (this->_amount);
}

Account::~Account()
{
    _dispalyTimestamp();
    std::cout << "index:" << this->_accountIndex << ';';
    std::cout << "amount:" << this->_amount << ';';
    std::cout << "closed" << std::endl;
}

void Account::displayStatus() const
{
    _dispalyTimestamp();
    std::cout << "index:" << this->_accountIndex << ';';
    std::cout << "amount:" << this->checkAmount() << ';';
    std::cout << "deposits:" << this->_nbDeposits << ';';
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::displayAccountsInfos()
{
    Account::_dispalyTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

int    Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

void    Account::makeDeposit(int deposit)
{
    _dispalyTimestamp();
    std::cout << "index:" << this->_accountIndex << ';';
    std::cout << "p_amount:" << this->checkAmount() << ';';
    std::cout << "deposit:" << deposit << ';';
    this->_amount += deposit;
    std::cout << "amount:" << this->checkAmount() << ';';
    _totalNbDeposits++;
    this->_nbDeposits++;
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
    _totalAmount += deposit;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    _dispalyTimestamp();
    std::cout << "index:" << this->_accountIndex << ';';
    std::cout << "p_amount:" << this->checkAmount() << ';';
    if (this->checkAmount() - withdrawal < 0)
    {
        std::cout << "withdrawal:refused" << std::endl;
        return 1;
    }
    std::cout << "withdrawal:" << withdrawal << ";";
    this->_amount -= withdrawal;

    std::cout << "amount:" << this->checkAmount() << ';';
    this->_nbWithdrawals++;
    this->_totalAmount -= withdrawal;
    std::cout << "nb_withdrawals:" << this->_nbDeposits << std::endl;
    _totalNbWithdrawals++;
    return 0;
}