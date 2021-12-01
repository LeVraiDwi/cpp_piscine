// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"


int		main( void ) {

	typedef std::vector<Account::t>						accounts_t;
	typedef std::vector<int>						ints_t;
	typedef std::pair<accounts_t::iterator, ints_t::iterator> 		acc_int_t;

	int	const		amounts[] = { 42, 54, 957, 432, 1234, 0, 754, 16576 }; //tab de int
	size_t const		amounts_size( sizeof(amounts) / sizeof(int) ); //taille de la tab de int
	accounts_t		accounts( amounts, amounts + amounts_size ); //construction d'un vecteur account : var(1er element, dernier_elem);
	accounts_t::iterator	acc_begin = accounts.begin(); //iterrateur pour parcourir le vecteur accounts --> accounts.begin()
	accounts_t::iterator	acc_end	= accounts.end(); //element apres le derniere element du vecteur

	int const		d[] = { 5, 765, 564, 2, 87, 23, 9, 20 };
	size_t const		d_size( sizeof(d) / sizeof(int) );
	ints_t			deposits( d, d + d_size ); //creation d'uin vecteur contenant des int
	ints_t::iterator	dep_begin = deposits.begin(); //premiere element
	ints_t::iterator	dep_end	= deposits.end(); //element apres la fin
	//pareil que dessus
	int	const		w[] = { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) );
	ints_t			withdrawals( w, w + w_size );
	ints_t::iterator	wit_begin = withdrawals.begin();
	ints_t::iterator	wit_end	= withdrawals.end();
	Account::displayAccountsInfos(); //[time_stamp] accounts:nb_account;total:somme_ammounts;deposits:nb_deposit;withdrawals:nb_witdrawals
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) ); //pour chaque element de faire account::displaystatus : [time_stamp] index:0;amount:42;deposits:0;withdrawals:0

	for ( acc_int_t it( acc_begin, dep_begin ); //pair de accounts et des depots qui leur seront fait
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) { //pour chaque element de la pair account/deposit first->account second->deposite;

		(*(it.first)).makeDeposit( *(it.second) ); //on depose dans account un element du vecteur de int deposite
	}

	Account::displayAccountsInfos(); 
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) ); //meme principe que l' autre for mais avec withdrawal
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
