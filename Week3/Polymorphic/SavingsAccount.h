//
//  SavingsAccount.h
//  POLYMORPHISM-HW
//
//  Created by Dylan Kinzer on 3/28/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#ifndef SavingsAccount_h
#define SavingsAccount_h
#include "Account.h"
namespace CSC252HW
{
	class SavingsAccount : public Account
	{
	public:
		SavingsAccount();
		//SavingsAccount& operator=(const SavingsAccount&);
		//SavingsAccount(const SavingsAccount&);

		double getAnnualInterestRate() const;

		void withdraw(const double&);
		void deposit(const double&);
		void display() const;
		void setInterestRate(const double&);


		virtual ~SavingsAccount();

	private:
		double m_balance = 0.0;
		double m_annIntRate = 0.0;
		double getBalance() const;
	};
}


#endif /* SavingsAccount_h */
