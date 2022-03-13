#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // Opening file using constructor and writing to it...
    string st = "Bhavya";
    ofstream out("Opening_a_File_And_Writing_To_it.txt");
    out<<st;
    return 0;
}