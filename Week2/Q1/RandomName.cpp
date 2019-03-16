//
//  RandomName.cpp
//  WK2-HW
//
//  Created by Dylan Kinzer on 3/14/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include "RandomName.h"

string randomFirstName()
{
  
    int randNum = rand() % 10;
    return first[randNum];
}
string randomLastName()
{
  
    int randNum = rand() % 10;
    return last[randNum];
    
}
