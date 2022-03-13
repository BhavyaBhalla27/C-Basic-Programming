#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string s = "I am learning C++ ";
   
    ofstream out("Reading_and_Writing.txt");
    out<<s;
    out.close();                // It is neccessary to close the file before reading it.
    ifstream in("Reading_and_Writing.txt");
    getline(in,s);
    cout<<s;
    return 0;
}