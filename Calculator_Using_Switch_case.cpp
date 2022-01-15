#include<iostream>
using namespace std;
int main(){
    int choice,a,b;
    cout<<"Enter your choice:\n1.Add\n2.Subtract\n3.Multiplication\n4.Addition\n";
    cin>>choice;
    cout<<"Enter the values of a and b: ";
    cin>>a>>b;
    switch(choice){
        int c;
        case 1:  c = a+b; cout<<"Result is "<<c; break;
        case 2:  c = a-b; cout<<"Result is "<<c; break;
        case 3:  c = a*b; cout<<"Result is "<<c; break;
        case 4:  c = a/b; cout<<"Result is "<<c; break;
    }
    return 0;
}