//
//  main.cpp
//  POLYMORPHISM-HW
//
//  Created by Dylan Kinzer on 3/28/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#include <iostream>
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "BankException.h"
#include <vector>
#include <stdexcept>


using namespace CSC252HW;
int main() {
    using namespace CSC252HW;
    
    try {
        
    SavingsAccount savings;
    CheckingAccount checking;
    
    savings.deposit(100.0);
    savings.setInterestRate(1 / 100.0);
    
    checking.deposit(500);
    checking.setOverDraftLimit(100.0);
    
    checking.withdraw(575.00);
    checking.display();
    using std::vector;
    
    vector<Account*> myPortfolio;
    SavingsAccount* ps = new SavingsAccount;
    ps-> deposit(100.0);
    ps->setInterestRate(1/100.0);
    
    CheckingAccount* ca = new CheckingAccount;
    ca-> deposit(100);
    ca-> withdraw(10000000);
    ca->display();
    ca-> setOverDraftLimit(10.0);
    myPortfolio.push_back(ps);
    myPortfolio.push_back(ca);
    
    for ( int i = 0; i< myPortfolio.size(); i++)
    {
        myPortfolio[i]->display();
    }
        
    }
    catch(std::runtime_error& re)
    {
        cout << "Caught std runtime exception" << re.what() << "\n";
    }
    catch (const BankException& be)
    {
        cout << "Caught BankException error" << be.what() << "\n";
    }
    catch(...)
    {
        cout << "Caught some unknown exception" << "\n";
    }
    return 0;
}
