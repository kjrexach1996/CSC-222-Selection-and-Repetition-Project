// 
//

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
    output_file.open("orderedList.txt");

    
    getline(cin, name_1);
    getline(cin, name_2);
    cout << name_1 << endl;
    cout << name_2 << endl;
   
    
    file_1.close();
    file_2.close();
    output_file.close();
    return 0;
}


