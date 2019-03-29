//
//  BankException.h
//  POLYMORPHISM-HW
//
//  Created by Dylan Kinzer on 3/28/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#ifndef BankException_h
#define BankException_h
#include <string>

namespace CSC252HW
{
    using std::string;
    class BankException
    {
    public:
        BankException(const string& msg);
        virtual ~BankException();
        string what() const;
        
    private:
        string msg;
    };
}

#endif /* BankException_h */
