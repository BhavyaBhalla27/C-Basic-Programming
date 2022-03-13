#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string s2;
    ifstream in("Opening_a_File_And_Reading.txt");
    //in>>s2;         // This will just read the words just before the space. To get full line, we use getline function.  
    // cout<<s2;  
    getline(in,s2);   // Reads full line.
    cout<<s2;
    return 0;
}