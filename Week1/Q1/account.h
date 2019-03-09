#pragma once
//
//  account.h
//  WEEK1_Practice
//
//  Created by Dylan Kinzer on 3/7/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.


#include<string>
#include<iostream>

using std::string;

namespace CSC252HW1
{

	class Account
	{
	public:

		Account(); // default constructor
		Account(string, string); // parameterized constructor
		~Account(); // destructor

		void creditTo(double); 
		bool debitFrom(double);

		//accessor - getter
		double getBalance() const;
		long getId() const;
		string getFirstName() const;
		string getLastName() const;


		// mutator - setter
		void setAccountId(long);


	private:
		long accountId;
		string firstName = "";
		string lastName = "";
		double currentBalance = 0.0; 
	};
}

