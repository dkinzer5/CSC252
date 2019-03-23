//
//  vector.h
//  REDO-VECTOR
//
//  Created by Dylan Kinzer on 3/23/19.
//  Copyright © 2019 Dylan Kinzer. All rights reserved.
//

#ifndef vector_h
#define vector_h

namespace CSC252HW2
{
    
#include <exception>
    
    using std::runtime_error;
    
    const int DEFAULT_SIZE = 20;
    
    template <typename T = int>
    class vector
    {
        
    public:
        vector();
        vector(int);
        vector(int, T);
        
        void push_back(T);
        void pop_back();
        const unsigned size();
        const T at(int);
        const bool empty();
        void clear();
        void swap(vector);
        ~vector();
        
    private:
        T* m_data = nullptr;
        unsigned m_size = 0; // this can also be used as POS
        int m_capacity = 0; // how many elements it can hold
        void checkCapacity();
    };

/****************************************************************
 * Name: DEFAULT CONSTRUCTOR
 * Purpose: Initialize an empty container of type T.
 * Description: Sets capacity, size, and allocate T array to heap
*****************************************************************/
    template <typename T>
    vector<T>::vector(): m_size (0), m_capacity (DEFAULT_SIZE)
    {
        m_data = new T[DEFAULT_SIZE];
    }
    
    
/****************************************************************
 * Name: PARAMETERIZED CONSTRUCTOR
 * Purpose: Initialize an empty container of user defined size.
 * Description: Sets capacity value and allocates a type T array
 *              of appropriate size
*****************************************************************/
    template<typename T>
        vector<T>::vector(int size) : m_size(0), m_capacity(size)
    {
        m_data = new T[size];
    }
    
    
/****************************************************************
 * Name: PARAMETERIZED CONSTRUCTOR
 * Purpose: Initialize an empty container of user defined size
 *          and values.
 * Description: Sets m_size to the 'pos' of next entry, sets m_capacity
                to whatever the user defined, allocates T type array to
                heap, and fills all elements of array with user
                defined value.
*****************************************************************/
    template<typename T>
    vector<T>::vector(int size, T defaultValue) : m_size(size), m_capacity(size)
    {
        // make the heap array
        m_data = new T[m_size];
        
        // set each element to user defined value
        for (size_t i = 0; i < m_size; i++)
        {
            m_data[i] = defaultValue;
        }
    }
    
    
/******************************************************************
 * Name: PUSH_BACK
 * Purpose: To append a user defined value to container
 * Description: Check's if capacity of container is large enough
                to store another value, then appends value
 ******************************************************************/
    template<typename T>
    void vector<T>::push_back(T element)
    {
        checkCapacity();
        m_data[m_size++] = element;
    }
    
    
/******************************************************************
 * Name: CHECKCAPACITY
 * Purpose: Make sure that the capacity is large enough to store
            another value
 * Description: creates another pointer to m_data, doubles capacity
                size, makes m_data larger, copies values in
*******************************************************************/
    template<typename T>
    void vector<T>::checkCapacity()
    {
        
        if (m_size >= m_capacity)
        {
            // make another pointer to that piece of memory
            T* old = m_data;
            
            // make the capacity twice the current size
            m_capacity = 2 * m_size;
            
            // re-allocate m_data to a larger spot of memory
            m_data = new T[m_capacity];
            
            // copy values into the new m_data
            for (size_t i = 0; i<m_size; i++)
            {
                m_data[i] = old[i];
            }
        }
    }
    
   
    
/******************************************************************
 * Name: POP_BACK
 * Purpose: Removes the last element of the array
 * Description: simply makes the m_size 1 less
*******************************************************************/
    template<typename T>
    void vector<T>::pop_back()
    {
        // make m_size 1 smaller
        m_size--;
    }
   
    
/******************************************************************
 * Name: SIZE
 * Purpose: Returns the size of the array
 * Description: Returns the private data m_size
*******************************************************************/

    template<typename T>
    const unsigned vector<T>::size()
    {
        return m_size;
    }
/******************************************************************
 * Name: AT
 * Purpose: Gets the element at a user defined index position
 * Descriptin: First needs to ensure that container is populated,
               also needs to ensure not asking for a spot that is
               not available. Once these checks are passed, return
               m_data at the specified index
*******************************************************************/
    template<typename T>
    const T vector<T>::at(int index)
    {
        if(m_size == 0)
        {
            throw runtime_error("CSC242HW2::vector has not elements...\n");
        }
        else if(index >= m_size)
        {
            throw runtime_error("CSC52HW2::vector... position not available \n");
        }
        else
        {
            return m_data[index];
        }
    }
    
    
/******************************************************************
 * Name: EMPTY
 * Purpose: Tells the user if the container is empty
 * Description: Returns true if the container is empty, false if not
*******************************************************************/
    template<typename T>
    const bool vector<T>::empty()
    {
        return m_size == 0;
    }

    
/******************************************************************
 * Name: CLEAR
 * Purpose: Empties out the container
 * Description: Really just giving the illusion of empty, when in
                reality, it is just setting the working position
                back to 0, and overwriting the old values
*******************************************************************/
    template<typename T>
    void vector<T>::clear()
    {
        m_size = 0;
    }
    
    
/*******************************************************************
 * Name: SWAP
 * Purpose: Allows a user to swap "this" vector with a specified one
 * Description: Creates a temp array and stores the values of 'this',
                thereafter the contents of 'that' are copied into
                'this'. Lastly the temp array values are copied into
                'that'.
********************************************************************/
    template<typename T>
    void vector<T>::swap(vector that)
    {
        
        // make a temporary box to store 'this' data
        T tempBox [m_size];
        
        // copy 'this' data into tempBox
        for (int i = 0; i < m_size; i++)
        {
            tempBox[i] = m_data[i];
        }
        
        // copy 'that' data into 'this'
        for (int i = 0; i < that.size(); i++)
        {
            m_data[i] = that.at(i);
        }
        // clear out 'that'
        that.clear();
        
        // copy tempbox into 'that'
        for (int i = 0; i < m_size; i++)
        {
            that.push_back(tempBox[i]);
        }
      
    }
    
/*********************************************************************
 * Name: DESCTRUCTOR
 * Purpose: To clean up any allocated memory
 * Description: deletes the T type, heap allocated array created
                in the constuctor.
*********************************************************************/

    template<typename T>
    vector<T>::~vector()
    {
        delete m_data;
    }
    

    
    
    
    
    

}
#endif /* vector_h */
