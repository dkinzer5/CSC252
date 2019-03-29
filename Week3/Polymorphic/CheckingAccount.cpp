//
//  CheckingAccount.cpp
//  POLYMORPHISM-HW
//
//  Created by Dylan Kinzer on 3/28/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include "CheckingAccount.h"

namespace CSC252HW
{
    using std::cout;
    using std::cin;
    using std::endl;
    //CTOR
    CheckingAccount::CheckingAccount()
    {
        
    }
    
    double CheckingAccount::getBalance() const
    {
        return m_balance;
    }
    
    void CheckingAccount::display() const
    {
        using std::setprecision;
        if(m_isOverdrawn)
        {
            cout << "Your balance is( " << setprecision(8) << m_balance << " )\n";
        }
        else
        {
            cout << "Your balance is " << setprecision(8) << m_balance << " credit \n";
        }
        cout << "Your total available funds are: " << setprecision(8) << getBalance();
    }
    
    double CheckingAccount::getOverDraftLimit() const
    {
        return m_overDraftLimit;
    }
    
    void CheckingAccount::withdraw(const double& val)
    {
        if(val > m_balance + m_overDraftLimit)
        {
            throw BankException("CheckingAccount::withdraw - Insufficient funds available");
        }
        else
        {
            m_balance = m_balance - val;
            if(m_balance < 0)
                m_overDraftLimit = true;
        }
        // wait
    }
    
    void CheckingAccount::deposit (const double& val)
    {
        if( val > 0)
        {
            m_balance += val;
        }
        else
            throw BankException("CheckingAccount::Deposit - You tried to deposit a negative amount - NOT ALLOWED !");
            
    }
    
    void CheckingAccount::setOverDraftLimit(const double & limit)
    {
        m_overDraftLimit = limit;
    }
    
    
    
    
    
    
    // DTOR
    CheckingAccount::~CheckingAccount()
    {
        
    }

}


