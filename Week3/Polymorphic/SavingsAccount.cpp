//
//  SavingsAccount.cpp
//  POLYMORPHISM-HW
//
//  Created by Dylan Kinzer on 3/28/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#include <stdio.h>
#include "SavingsAccount.h"
namespace CSC252HW
{
    SavingsAccount::SavingsAccount()
    {
        
    }
    
    double SavingsAccount::getBalance() const
    {
        return m_balance;
    }
    
    double SavingsAccount::getAnnualInterestRate() const
    {
        return m_annIntRate;
    }
    
    void SavingsAccount::withdraw(const double& val)
    {
        if(val >= m_balance)
        {
            m_balance -= val;
        }
        else
            throw BankException("SavingsAccount::withdraw - You tried to deposit a negative amount - NOT ALLOWED !");
    }
    
    void SavingsAccount::deposit (const double& val)
    {
        if( val > 0)
        {
            m_balance += val;
        }
        else
            throw BankException("SavingsAccount::Deposit - You tried to deposit a negative amount - NOT ALLOWED !");
    }
    
    void SavingsAccount::setInterestRate(const double& newInterest)
    {
        m_annIntRate = newInterest;
    }
    
    void SavingsAccount::display() const
    {
        cout << "Your balance is : " << setprecision(8) << m_balance  << std::endl;
    }
    
    
    
    
    
    
    
    
    //DTOR
    SavingsAccount::~SavingsAccount()
    {
        
    }

}

