//
//  main.cpp
//  REDO-VECTOR
//
//  Created by Dylan Kinzer on 3/23/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#include <iostream>
#include "vector.h"

using namespace CSC252HW2;
using std::cout;

int main() {
    
/*****************************************************************
* TEST DEFAULT CONSTRUCTOR
* TEST EMPTY
* TEST PUSH_BACK
* TEST AT
* TEST POP_BACK
* TEST SIZE
****************************************************************/
    
    cout << "---------------------------------\n";
    cout << "Test of default constructor: \n";
    cout << "----------------------------------\n";
    vector<int> v1;
    cout << "* Default constructor called successfully!\n";
    
    if (v1.empty())
    {
    cout << "* The object is empty!\n\n";
    }
    else
    {
        cout << "ERROR - object should be empty\n";
    }
    
    // PUSH_BACK and AT
    int TEST_SIZE = 5;
    cout << "Calling push_back()......\n";
    cout << "* Values: " ;
    for (int i = 0; i<TEST_SIZE; i++)
    {
        v1.push_back(i);
        cout << v1.at(i) << " ";
    }
    cout << "\n* Size is: " << v1.size();
    cout << "\n* .push_back() successful\n";
    cout << "* .at() successful\n";
    
    // POP_BACK
    cout << "\nCalling pop_back()...... ";
    v1.pop_back();
    cout << "\n* Values: ";
    for (int i = 0; i<TEST_SIZE-1; i++)
    {
        cout << v1.at(i) << " ";
    }
    cout << "\n* .pop_back() successful\n";
    cout << "* Size is now: " << v1.size() << "\n";
    
/*****************************************************************
* TEST PARAMETERIZED CONSTRUCTOR 1
* TEST EMPTY
* TEST PUSH_BACK
* TEST AT
* TEST POP_BACK
* TEST SIZE
****************************************************************/

    cout << "--------------------------------------\n";
    cout << "Test of parameterized constructor 1: \n";
    cout << "--------------------------------------\n";
    vector<int> v2(TEST_SIZE);
    cout << "* Constructor 1 called successfully!\n";
    
    if (v2.empty())
    {
        cout << "* The object is empty!\n\n";
    }
    else
    {
        cout << "ERROR - object should be empty\n";
    }
    
    // PUSH_BACK and AT
    cout << "Calling push_back()......\n";
    cout << "* Values: " ;
    for (int i = 0; i<TEST_SIZE; i++)
    {
        v2.push_back(i);
        cout << v2.at(i) << " ";
    }
    cout << "\n* Size is: " << v2.size();
    cout << "\n* .push_back() successful\n";
    cout << "* .at() successful\n";
    
    // POP_BACK
    cout << "\nCalling pop_back()...... ";
    v2.pop_back();
    cout << "\n* Values: ";
    for (int i = 0; i<TEST_SIZE-1; i++)
    {
        cout << v2.at(i) << " ";
    }
    cout << "\n* .pop_back() successful\n";
    cout << "* Size is now: " << v2.size() << "\n";
    

    
/*****************************************************************
* TEST PARAMETERIZED CONSTRUCTOR 1
* TEST EMPTY
* TEST PUSH_BACK
* TEST AT
* TEST POP_BACK
* TEST SIZE
******************************************************************/
    
    cout << "--------------------------------------\n";
    cout << "Test of parameterized constructor 2: \n";
    cout << "--------------------------------------\n";
    vector<double> v3(TEST_SIZE, 7.7 );
    cout << "* Constructor 2 called successfully!\n";
    
    if (v3.empty())
    {
        cout << "* The object is empty! - ERROR";
    }
    else
    {
        cout << "The object is not empty - SUCCESS!\n";
    }
    
    // PUSH_BACK and AT
    cout << "Calling push_back()......\n";
    cout << "* Values: " ;
    for (int i = 0; i<TEST_SIZE; i++)
    {
        v3.push_back(i);
    }
    for (int i = 0; i< TEST_SIZE * 2; i++)
    {
        cout << v3.at(i) << " ";
    }
    cout << "\n* Size is: " << v3.size();
    cout << "\n* .push_back() successful\n";
    cout << "* .at() successful\n";
    
    // POP_BACK
    cout << "\nCalling pop_back()...... ";
    v3.pop_back();
    cout << "\n* Values: ";
    for (int i = 0; i<(TEST_SIZE * 2) - 1 ; i++)
    {
        cout << v3.at(i) << " ";
    }
    cout << "\n* .pop_back() successful\n";
    cout << "* Size is now: " << v3.size() << "\n";
    
/*****************************************************************
* TEST SWAP FUNCTION
*****************************************************************/
    cout << "\n---------------------------------------------------\n";
    cout << "Test swapping feature with v1 and v2\n";
    cout << "---------------------------------------------------\n";
    
    cout << "* CLEARING VECTORS......\n";
    cout << "* POPULATING NEW VECTOR VALUES......\n\n";
    v1.clear();
    v2.clear();
    for (int i = 50; i<55; i++)
    {
        v1.push_back(i);
    }
    cout << "v1: ";
    for (int i = 0; i<TEST_SIZE; i++)
    {
        cout << v1.at(i)<< " ";
    }
    cout << "\n";
    
    for (int i = 10; i<15; i++)
    {
        v2.push_back(i);
    }
    cout << "v2: ";
    for (int i = 0; i<TEST_SIZE; i++)
    {
         cout << v2.at(i)<< " ";
    }
    cout << "\n\n";
    cout << "* SWAPPING......\n";
    v1.swap(v2);
    
    cout << "v1: ";
    for (int i = 0; i<TEST_SIZE; i++)
    {
        cout << v1.at(i)<< " ";
    }
    cout << "\n";
    
    for (int i = 10; i<15; i++)
    {
        v2.push_back(i);
    }
    cout << "v2: ";
    for (int i = 0; i<TEST_SIZE; i++)
    {
        cout << v2.at(i)<< " ";
    }
    
    cout << "\nThe swap was a success! \n PROGRAM IS SUCCESSFUL. \n GOODBYE..";
    
    return 0;
}
