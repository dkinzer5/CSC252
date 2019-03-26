#ifndef FileReader_H
#define FileReader_H

#include <string>
#include <vector>

namespace CSC252HW3
{

	using std::string;
	using std::vector;

	class FileReader
	{
	public:


		FileReader();
		virtual ~FileReader();

		bool writeData(const string& filename);
		bool readData(const string&);

		void displayData() const;

	private:
		void sortData();
		vector<int> m_data;
		bool issorted = false;
	};

}

#endif // !FileReader_H


