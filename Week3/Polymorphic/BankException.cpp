//
//  BankException.cpp
//  POLYMORPHISM-HW
//
//  Created by Dylan Kinzer on 3/28/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#include <stdio.h>
#include "BankException.h"
namespace CSC252HW
{
    BankException::BankException(const string& m) : msg(m)
    {
    
    }
    
    BankException::~BankException()
    {
        
    }
    
    string BankException::what() const
    {
        return msg;
    }
}
