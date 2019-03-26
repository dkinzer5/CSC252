#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

#include "FileReader.h"


namespace CSC252HW3
{
	using std::ofstream;
	using std::ifstream;
	using std::ios;
	using std::cout;
	using std::endl;

	FileReader::FileReader()
	{
		// seed random number generator on construction
		srand(static_cast<unsigned int>(time(0)));
	}


	FileReader::~FileReader()
	{

	}
	/****************************************************************************************
	* Name: writeData()
	* Purpose: To create and write 100 random integers to: 'data.txt'
	* Description: Uses the passed parameter to create that file and write the data to it
	* Parameters (1): 'filename' passed by const ref
	* Return type: BOOL
	*****************************************************************************************/
	bool FileReader::writeData(const string& filename)
	{
		// output file stream
		ofstream outFile;

		// success flag initialized to false
		bool retVal = false;

		// open or create the specified filename 
		// ios::out for outputting and ios::app for appending cursor to end of file on open
		outFile.open(filename, ios::out | ios::app);

		// check if file is open
		if (!outFile.is_open())
		{
			cout << "Error opening file" << endl;
			return retVal;
		}
		else
		{
			// fill file with random digits
			int numDigits = 100;
			for (int i = 0; i < numDigits; i++) 
			{
				outFile << rand() % 100 << " ";
			}

			// separate each entry
			outFile << "\n\n";

			// close the file
			outFile.close();

			// set return value to true
			retVal = true;
		}
		return retVal;
	}


	/****************************************************************************************
	* Name: readData()
	* Purpose: To read the data from a text file and return them sorted
	* Description: Uses passed parameter to open the specified file, read the data, sort it
	*			   and print to screen
	* Parameters (1): 'filename' passed by const ref.
	* Return type: BOOL
	*****************************************************************************************/
	bool FileReader::readData(const string& filename)
	{
		// make input file stream
		ifstream inFile;

		// success flag initialized to false
		bool retVal = false;

		// open the specified filename 
		// ios::in for taking in from file
		inFile.open(filename, ios::in);

		// check if file is open
		if (!inFile.is_open())
		{
			cout << "Error opening file" << endl;
			return retVal;
		}
		else
		{
			// make temporary holder 
			int tempVal = 0;

			// read digits into tempVal, then push to m_data
			while (! inFile.eof())
			{
				inFile >> tempVal;
				m_data.push_back(tempVal);
			}

			// sort numbers
			sortData();

			// close the file
			inFile.close();

			//set flag to true
			retVal = true;
		}
		
		// print to screen
		cout << "The sorted data is: " << endl;
		for (int i = 0; i < m_data.size(); i++)
		{
			cout << m_data.at(i) << " ";
		}
		cout << endl;

		return retVal;
	}


	/****************************************************************************************
	* Name: sortData()
	* Purpose: To sort m_data
	* Description: checks if m_data has values, and sorts in ascending order
	* Parameters: None
	* Return type: VOID
	*****************************************************************************************/
	void FileReader::sortData()
	{
		// check if empty
		if (m_data.size() != 0)
		{
			sort(m_data.begin(), m_data.end());
		}
		// set sorted flag to tru
		issorted = true;
	}
}


