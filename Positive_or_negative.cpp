#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the values of a: ";
    cin>>a;
    if(a>0){
        cout<<"Positive Number";
    }
    else if (a<0)
    {
        cout<<"Negative Number";
    }
    else{
        cout<<"Zero";
    }
    return 0;
}