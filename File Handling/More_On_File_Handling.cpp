#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ofstream out;
    out.open("Sample.txt"); // open function used to open the files and then perform operations on it..
    out << "This is me" << endl;
    out << "I am learning C++";
    out.close(); // close the file..
    ifstream in;
    string st;
    // in.open("Sample.txt");
    // getline(in,st);
    // cout<<st;
    // in.close();
    // Using a while loop to read the contents of file...
    in.open("Sample.txt");
    while (in.eof() == 0)
    { // eof --> end of file
        getline(in, st);
        cout << st;
    }
    in.close();
    return 0;
}