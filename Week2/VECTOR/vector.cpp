#include "vector.h"
#include <iostream>


namespace CSC252HW2
{
	using std::cout;
	using std::endl;
	// constructor to initialize an empty vector
	template<typename T>
	vector<T>::vector()
	{
	
	}

	//  constructor to initialize to certain size, filled with default values
	template<typename T>
	vector<T>::vector(int size)
	{
		m_data = new double[size];
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
		/*
			If user has not specified size of vector before calling this function, 
			initialize an array of size 1 to get started
		*/

		if (m_data == nullptr)
		{
			m_data = new double[1];
			m_capacity = 1;
			m_pos = capacity - 1;
		
		}
		else
		{
			m_capacity++; // make capacity 1 larger
			T dataCopy[m_capacity];

			// Populate copy array with all the values of the original array
			for (size_t i = 0; i < m_capacity; i++)
			{
				dataCopy[i] = m_data[i];
			}
			// Make the last element of the copy array equal to whatever was passed in the function
			dataCopy[m_capacity - 1] = element;

			// delete the old array
			delete[] m_data;

			// make a new array of the proper capacity
			m_data = new T[m_capacity];

			// fill m_data with the proper values
			for (size_t i = 0; i < m_capacity; i++)
			{
				m_data[i] = dataCopy[i]
			}
			m_pos = m_capacity - 1;

		}
	}

	//remove last element
	template<typename T>
	void vector<T>::pop_back()
	{
		// make sure it's not a nullptr
		if (m_data != nullptr)
		{
			// special case if capacity is 1, it becomes 0 and the m_data array would get deleted
			if (m_capacity > 1)
			{
				m_capacity--;
				T dataCopy[m_capacity];
				for (size_t i = 0; i < m_capacity; i++)
				{
					dataCopy[i] == m_data[i];
				}

				// delete current array
				delete[] m_data;

				// make new heap allocated array
				m_data = new T[m_capacity];

				// re-fill m_data with proper values
				for (size_t i = 0; i < m_capacity; i++)
				{
					m_data[i] = dataCopy[i];
				}
			}
			else
			{
				delete[] m_data;
				m_data = nullptr;
			}

		}
		else
		{
			cout << "Can't popback null" << endl;
		}
		
	}

	// returns the number of elements
	template<typename T>
	const unsigned vector<T>::size()
	{
		if (m_data != nullptr)
		{
			return m_capacity;
		}
		else
		{
			cout << "Can't return null" << endl;
		}

	}

	//returns the element in the specified position
	template <typename T>
	const T vector<T>::at(int index)
	{
		if (m_data != nullptr)
		{
			return m_data[index];
		}
		else
		{
			cout << "Can't return null" << endl;
		}
	}

	// returns true if vector is empty
	template<typename T>
	const bool vector<T>::empty()
	{
		if (m_data == nullptr || m_pos == 0)
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
		if (m_data == nullptr)
		{

		}
		else 
		{
			delete[] m_data;
		}
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