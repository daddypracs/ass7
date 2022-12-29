
/*Write a C++ program that creates an output file, writes
information to it, closes the file, open it again as an
input file and read the information from the file.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int age;
    string n;
    cout << "Enter File Name to open:" << endl;
    cin >> n;
    ofstream file;
    file.open(n, ios::in);
    if (!file)
    {
        cout << "Error opening the file" << endl;
        return 1;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Name" << endl;
        cin >> name;
        file << name << " ";
        cout << "Enter Age" << endl;
        cin >> age;
        file << age << '\n';
    }
    file.close();
    ifstream file1;
    file1.open(n, ios::out);
    name = "";
    age = 0;
    cout << "\t------DATABASE------\t" << endl;
    while (file1 >> name >> age)
    {
        cout << "\t" << name << "\t\t" << age << endl;
    }
    file1.close();
    return 0;
}




