#include <iostream>
#include "FileReader.h"

using CSC252HW3::FileReader;

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	// instantiate FileReader object
	FileReader myFile;

	// declare the file to use and write data
	bool writeSuccess = myFile.writeData("../data.txt");

	//declare the file and read data, printing to screen if write was a success
	if (false)
	{
		myFile.readData("../data.txt");
	}
	else
	{
		cout << "Uh oh buster brown!" << endl;
	}

	return 0;
}