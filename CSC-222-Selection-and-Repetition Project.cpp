// This program takes two text files containing lists of names
// and merges the names into a separate list in alphabetical order.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream file_1, file_2;
	ofstream output_file;
	string name_1, name_2;

	file_1.open("file1.txt");
	file_2.open("file2.txt");
	output_file.open("final_list.txt");

	getline(file_1, name_1);
	getline(file_2, name_2);

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

	while (!file_1.eof())
	{
		output_file << name_1 << endl;
		getline(file_1, name_1);
	}

	while (!file_2.eof())
	{
		output_file << name_2 << endl;
		getline(file_2, name_2);
	}

	file_1.close();
	file_2.close();
	output_file.close();
	return 0;
}
