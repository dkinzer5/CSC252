#include <iostream>
#include "vector.h"



int main()
{
    using CSC252HW2::vector;
    using std::cout;
    using std::cin;
    using std::endl;
    
    const int size = 50;
    // Use constructors
    vector<int> v1;
    vector<int> v2(size);
    vector<double> v3(5,7.4);
    
    
    // test push_back
    for(int i = 0; i<size; i++)
    {
        v2.push_back(i);
    }
    
    // test at()
    for(int i = 0; i<size; i++)
    {
        cout << v2.at(i) << endl;;
        
    }
    
    // test size();
    cout << "the size of v2 is: " << v2.size() << endl;
    
    // test pop_back()
    v2.pop_back();
    
    cout << "After pop_back(), the size of v2 is: " << v2.size() << endl;
    
    
    
    
    /*
     * Test constructors
    */
    
    
    
    /*
     v1.push_back(15);
     cout << v1.at(0);*/
    return 0;
}
