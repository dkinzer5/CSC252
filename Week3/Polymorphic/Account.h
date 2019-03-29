//
//  Account.h
//  POLYMORPHISM-HW
//
//  Created by Dylan Kinzer on 3/28/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#ifndef Account_h
#define Account_h
#include <iostream>
#include <iomanip>
#include "BankException.h"

namespace CSC252HW
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::setprecision;

    class Account
    {
       
    public:
        Account();
        virtual ~Account();
        virtual void withdraw(const double&) = 0;
        virtual void deposit (const double&) = 0;
        virtual void display() const = 0;
        
    private:
    };
}
#endif /* Account_h */
