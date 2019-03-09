//
//  account.cpp
//  WEEK1_Practice
//
//  Created by Dylan Kinzer on 3/7/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#include <stdio.h>
#include "account.h"

using std::cout;
using std::endl;

namespace CSC252HW1
{

	Account::Account()
	{

	}

	Account::Account(string first, string last)
	{
		firstName = first;
		lastName = last;
	}

	Account::~Account()
	{

	}

	void Account::creditTo(double c)
	{
		if (c > 0)
			currentBalance += c;
		else
			cout << "cannot credit negative amount" << endl;
	}

	bool Account::debitFrom(double d)
	{
		bool retval = false;
		if (currentBalance >= d)
		{
			currentBalance -= d;
			retval = true;
		}

		return retval;

	}

	void Account::setAccountId(long l1)
	{
		accountId = l1;
	}

	long Account::getId() const
	{
		return accountId;
	}

	double Account::getBalance() const
	{
		return currentBalance;
	}

	string Account::getFirstName() const
	{
		return firstName;
	}

	string Account::getLastName() const
	{
		return lastName;
	}
}
