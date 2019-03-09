//
//  main.cpp
//  WEEK1_Practice
//
//  Created by Dylan Kinzer on 3/7/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "account.h"

//namespaces
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

using CSC252HW1::Account;

int main() {

	// Instantiate an object of type Account to "John Smith"
	// Starting balance of $100.00
	Account y("John", "Smith");
	y.creditTo(100.0);

	// Neatly print out the First and Last, Acct ID, Balance
	cout << y.getFirstName() << " " << y.getLastName() << endl;
	y.setAccountId(789876577);
	cout << "Account ID: " << y.getId() << endl;
	cout << fixed << setprecision(2) << "The balance is: $" << y.getBalance() << endl;

	//dynamically allocate Account object on Heap
	Account *pAct = nullptr;
	pAct = new Account("Heap", "Man");
	pAct->creditTo(10000.0);
	pAct->setAccountId(787757089);

	//deallocate Heap object
	delete pAct;

	// Make 10 heap allocated account pointers
	Account *pTenAccts = new Account[10];
	delete[] pTenAccts;

	return 0;
}
