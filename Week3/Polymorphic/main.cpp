//
//  main.cpp
//  POLYMORPHISM-HW
//
//  Created by Dylan Kinzer on 3/28/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#include <iostream>
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "BankException.h"
#include <vector>
#include <stdexcept>

int main() {
	
	using namespace CSC252HW;
	using std::vector;

	try {

		// instantiate savings and checkings account object
		SavingsAccount savings;
		CheckingAccount checking;

		// deposit 100 into savings with 1% interest
		savings.deposit(100.0);
		savings.setInterestRate(1 / 100.0);

		// deposit 100 into checking with overdraft limit of $50.00
		checking.deposit(100.0);
		checking.setOverDraftLimit(50.0);

		// try to withdraw 143 from only 100 should have 7 left in overdraft limit
		checking.withdraw(143.00);
		checking.display();

		// make account pointer vector
		vector<Account*> myPortfolio;

		// make pointer to heap allocated savings account
		SavingsAccount* ps = new SavingsAccount;

		// deposit 100 into it - set interest to 1%
		ps->deposit(100.0);
		ps->setInterestRate(1 / 100.0);

		// make pointer to heap allocated checking account
		CheckingAccount* ca = new CheckingAccount;

		// deposit 100 into it and try to withdraw $105.00
		ca->setOverDraftLimit(10.0);
		ca->deposit(100);
		ca->withdraw(105);

		// try to display the new funds if applicable
		ca->display();
		
		// try to put checkings and savings into portfolio
		myPortfolio.push_back(ps);
		myPortfolio.push_back(ca);

		cout << "\nPORTFOLIO DISPLAY:" << endl;
		cout << "**************************************" << endl;
		for (int i = 0; i < myPortfolio.size(); i++)
		{
			myPortfolio[i]->display();
		}

	}
	catch (std::runtime_error& re)
	{
		cout << "Caught std runtime exception" << re.what() << "\n";
	}
	catch (const BankException& be)
	{
		cout << "Caught BankException error" << be.what() << "\n";
	}
	catch (...)
	{
		cout << "Caught some unknown exception" << "\n";
	}
	return 0;
}
