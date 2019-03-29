//
//  CheckingAccount.h
//  POLYMORPHISM-HW
//
//  Created by Dylan Kinzer on 3/28/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#ifndef CheckingAccount_h
#define CheckingAccount_h
#include "Account.h"
namespace CSC252HW
{
	class CheckingAccount : public Account
	{
	public:
		CheckingAccount();


		double getOverDraftLimit() const;
		void withdraw(const double&);
		void deposit(const double&);
		void display() const;
		void setOverDraftLimit(const double&);
		virtual ~CheckingAccount();



	private:
		double m_balance = 0.0;
		double m_overDraftLimit = 0.0;
		bool m_isOverdrawn = false;
		double getBalance() const;
	};
}
#endif /* CheckingAccount_h */
