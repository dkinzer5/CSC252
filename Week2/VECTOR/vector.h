#pragma once

namespace CSC252HW2
{

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
		double* m_data = nullptr;
		unsigned m_pos = 0;
		unsigned m_capacity = 0;
	};
}
