// This program takes two text files containing lists of names
// and merges the names into a separate list in alphabetical order.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	//Initializes variables
	ifstream file_1, file_2;
	ofstream output_file;
	string name_1, name_2;

	//Opens all files
	file_1.open("file1.txt");
	file_2.open("file2.txt");
	output_file.open("final_list.txt");

	//Gets very first line from each input file file
	getline(file_1, name_1);
	getline(file_2, name_2);

	//Loop goes through each name in each file alphabetically and
	//ends when loop has reached the end of one file.
	while (!file_1.eof() && !file_2.eof())
	{
		if (name_1 < name_2)
		{
			output_file << name_1 << endl;
			getline(file_1, name_1);
		}
		else 
		{
			output_file << name_2 << endl;
			getline(file_2, name_2);
		}
	}

	//Loops in case first file is not finished and enters remaining data
	while (!file_1.eof())
	{
		output_file << name_1 << endl;
		getline(file_1, name_1);
	}

	//Loops in case second file is not finished and enters remaining data
	while (!file_2.eof())
	{
		output_file << name_2 << endl;
		getline(file_2, name_2);
	}

	//Closes all files
	file_1.close();
	file_2.close();
	output_file.close();
	return 0;
}
