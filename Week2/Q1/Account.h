//
//  Account.h
//  WK2-HW
//
//  Created by Dylan Kinzer on 3/14/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#ifndef Account_h
#define Account_h

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
        
        //accessor - getter
        double getBalance() const;
        long getId() const;
        string getFirstName() const;
        string getLastName() const;
        string getPassword() const;
        
        
        // mutator - setter
        void setAccountId(long);
        void setUserName(string, string);
        void setPassword(string);
        void creditTo(double);
        bool debitFrom(double);
        
        
    private:
        long m_accountId;
        string m_password;
        string m_firstName = "";
        string m_lastName = "";
        double m_currentBalance = 0.0;
    };
}

#endif /* Account_h */
