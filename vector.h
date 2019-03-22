#include <iostream>
using namespace std;

namespace CSC252HW2
{
    const int DEFAULT_SIZE = 20;
    template <typename T>
    
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
        unsigned m_size = 0;
        unsigned m_pos = 0;
        unsigned m_capacity = 0;
        void checkCapacity();
        
    };
         




   
    // constructor to initialize an empty vector
    template<typename T>
    vector<T>::vector()
    {
        // set default container size to 16
        m_capacity = DEFAULT_SIZE;
        m_data = new T[DEFAULT_SIZE];
    }
    
     //  constructor to initialize to certain size, filled with default values
     template<typename T>
     vector<T>::vector(int size)
     {
     m_data = new T[size];
     m_capacity = size;
     }
     
     // certain size, iniialized with specific value
     template<typename T>
     vector<T>::vector(int size, T defaultValue)
     {
     m_data = new T[size];
     for (int i = 0; i < size; i++)
     {
     m_data[i] = defaultValue;
     }
     // sets pos to the appropriate place
     m_pos = size - 1;
     }
     
     // append to vector
     template<typename T>
     void vector<T>::push_back(T element)
     {
     
     checkCapacity();
     
     // if at position 0 then set the 0th element - else set the next position
     if (m_pos == 0)
     {
     m_data[m_pos] = element;
     m_pos++;
     }
     else
     {
         m_data[m_pos] = element;
         m_pos++;
     }
     
     }
     
     template<typename T>
     void vector<T>::checkCapacity()
     {
     if (m_pos >= m_capacity)
     {
     // Points to the current array in heap
     T* oldContainer = m_data;
     
     // double the capacity
     m_capacity = 2 * m_size;
     
     // allocate larger array
     m_data = new T[m_capacity];
     
     for (int i = 0; i < m_size; i++)
     {
     m_data[i] = oldContainer[i];
     }
     
     delete oldContainer;
     
     }
     }
     
     //remove last element
     template<typename T>
     void vector<T>::pop_back()
     {
     // old
     T* oldContainer = m_data;
     
     m_data = new T[m_capacity];
     
     // copy all but the last element - leave pos at the next spot
     for (int i = 0; i < m_pos--; i++)
     {
         m_data[i] = oldContainer[i];
     }
     
     }
     
     // returns the number of elements
     template<typename T>
     const unsigned vector<T>::size()
     {
     return m_pos;
     }
     
     //returns the element in the specified position
     template <typename T>
     const T vector<T>::at(int index)
     {
         return m_data[index];
     }
     
     // returns true if vector is empty
     template<typename T>
     const bool vector<T>::empty()
     {
     if (m_pos == 0)
     {
     return true;
     }
     else
     {
     return false;
     }
     }
     
     //removes all elements from the vector
     template<typename T>
     void vector<T>::clear()
     {
     
     delete[] m_data;
     m_capacity = 16;
     m_data = new T[m_capacity];
     
     }
     
     //swaps the contents of this vector with the specified vector
     template<typename T>
     void vector<T>::swap(vector v2)
     {
     if (m_capacity == v2.size())
     {
     T thisBuffer[m_capacity];
     T thatBuffer[m_capacity];
     
     //copy into buffers
     for (size_t i = 0; i < m_capacity; i++)
     {
     
     thisBuffer[i] = m_data[i];
     thatBuffer[i] = v2[i];
     }
     
     //swap
     for (size_t i = 0; i < m_capacity; i++)
     {
     
     m_data[i] = thatBuffer[i];
     v2[i] = thisBuffer[i];
     }
     }
     else
     {
     cout << "Can't swap vectors of different length" << endl;
     }
     }
     
     // DTOR
     template<typename T>
     vector<T>::~vector()
     {
     //clean up
     delete[] m_data;
     }
    
}
