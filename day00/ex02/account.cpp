#include "Account.hpp"
#include <ctime>
#include <iostream>

Account::Account(int initial_deposit){
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_nbAccounts += 1;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";created" << std::endl; 
	return;
}

Account::~Account(){
	_displayTimestamps();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";close" << std::endl; 
	return;
}

void	Account::makeDeposit(int deposit){
	_displayTimestamps();
	std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << this->_amount << ";"; 
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits += 1;
	this->_totalNbDeposits += 1;
	std::cout << "deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
	return;
}

static void	Account::displayAccountInfos(void){
	_displayTimestamps();
	std::cout << "accounts:" << this->_nbAccounts << ";total:" << this->_totalAmount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return;
}

bool	Account::makeWithdrawal(int withdrawal){
	_displayTimestamps();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";";
	if (withdrawal > this->_amount)
	{
		std::cout << "withdrawals:refused"
		return (0);
	}
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	this->_nbWithdrawals += 1;
	this->_totalNbWithdrawals += 1;
	std::cout << "withdrawal:" << withdrawal << ";amount:" << this->amount << ";nb_withdrawals" << this->nbWithdrawals << std::endl;
	return (1);
}

void	Account::displayStatus(void) const{
	_displayTimestamps();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return;
}

static void	Account::_displayTimestamp(void){
	time		timer;
	struct tm	act_time = {0};

	time(&timer);
	act_time = localtime(&timer);
	std::cout << "[" << 1900 + act_time.tm_year << act_time.tm_mon << act_time.tm_mday << "_" << act_time.tm_hour << act_time.tm_min << act_time.tm_sec << "] " << std::endl;
	return;
}

int	Account::_nbAccounts = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNwithdrawals = 0;
