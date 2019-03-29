//
//  CheckingAccount.cpp
//  POLYMORPHISM-HW
//
//  Created by Dylan Kinzer on 3/28/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include "CheckingAccount.h"

namespace CSC252HW
{
	using std::cout;
	using std::cin;
	using std::endl;
	//CTOR
	CheckingAccount::CheckingAccount()
	{

	}

	double CheckingAccount::getBalance() const
	{
		return m_balance;
	}

	void CheckingAccount::display() const
	{
		using std::setprecision;
		using std::fixed;

		cout << fixed << setprecision(2);
		if (m_isOverdrawn)
		{
			cout << "Checking balance: $( " << m_balance << " )\n";
			cout << "Remaining overdraft limit : $" << m_balance + m_overDraftLimit << "\n";
			cout << "*****************************************************" << endl;
		}
		else
		{
			cout << "Checking Balance: " << setprecision(2) << getBalance();
		}
	}

	double CheckingAccount::getOverDraftLimit() const
	{
		return m_overDraftLimit;
	}

	void CheckingAccount::withdraw(const double& val)
	{
		if (val > m_balance + m_overDraftLimit)
		{
			throw BankException("CheckingAccount::withdraw - You are attempting to withdraw an amount that exceeds your overdraft limit");
		}
		else
		{
			m_balance -= val;
			if (m_balance < 0)
				m_isOverdrawn = true;
		}
	}

	void CheckingAccount::deposit(const double& val)
	{
		if (val > 0)
		{
			m_balance += val;
		}
		else
			throw BankException("CheckingAccount::Deposit - You tried to deposit a negative amount - NOT ALLOWED !");

	}

	void CheckingAccount::setOverDraftLimit(const double & limit)
	{
		m_overDraftLimit = limit;
	}






	// DTOR
	CheckingAccount::~CheckingAccount()
	{

	}

}


