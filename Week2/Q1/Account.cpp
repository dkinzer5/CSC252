//
//  Account.cpp
//  WK2-HW
//
//  Created by Dylan Kinzer on 3/14/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#include "Account.h"
#include "RandomName.h"

using std::cout;
using std::endl;

namespace CSC252HW1
{
    // Default CTOR
    Account::Account()
    {
       
    }
    
    // Parameterized CTOR
    Account::Account(string first, string last)
    {
        m_firstName = first;
        m_lastName = last;
    }
    
    // DTOR
    Account::~Account()
    {
        
    }
    
//***************************************
//              ACCESSORS
//***************************************
    
    // gets account balance
    double Account::getBalance() const
    {
        return m_currentBalance;
    }
    
    // gets account ID
    long Account::getId() const
    {
        return m_accountId;
    }
    
    // gets first name
    string Account::getFirstName() const
    {
        return m_firstName;
    }
    
    // gets last name
    string Account::getLastName() const
    {
        return m_lastName;
    }
    
    // gets password
    string Account::getPassword() const
    {
        return m_password;
    }
    
//***************************************
//               MUTATORS
//***************************************
    
    // Sets account ID
    void Account::setAccountId(long l1)
    {
        m_accountId = l1;
    }
    
    // Sets first and last name
    void Account::setUserName(string first, string last)
    {
        m_firstName = first;
        m_lastName = last;
    }
    
    // Sets password
    void Account::setPassword(string pw)
    {
        m_password = pw;
    }
    
    void Account::creditTo(double c)
    {
        if (c > 0)
            m_currentBalance += c;
        else
            cout << "cannot credit negative amount" << endl;
    }
    
    // Takes away from account balance
    bool Account::debitFrom(double d)
    {
        bool retval = false;
        if (m_currentBalance >= d)
        {
            m_currentBalance -= d;
            retval = true;
        }
        
        return retval;
    }
}

