//
//  RandomName.h
//  WK2-HW
//
//  Created by Dylan Kinzer on 3/14/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#ifndef RandomName_h
#define RandomName_h

#include<iostream>
#include<string>

using std::string;

const string first[] = {"Jane", "Joe", "Mary", "Dylan", "John", "Tom", "Susan", "Becky", "Stacy", "Matt"};
const string last[] = {"Smith", "Parker", "Kinzer", "Kimball", "Pacer", "Cruise", "Allen", "Manaford", "Stacy", "Adams"};

string randomFirstName();
string randomLastName();


#endif /* RandomName_h */
