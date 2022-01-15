#include<iostream>
using namespace std;
int main(){
    int num,factorial=1,i=1;
    cout<<"Enter the number: ";
    cin>>num;
    if(num<0){
        cout<<"Factorial of negative number is not defined";
    }
    else if(num==0||num==1){
        cout<<"Factorial = 1";
    }
    else{
    while(i<=num){
        factorial = factorial * i;
        i++;
    }
    cout<<"Factorial = "<<factorial;
    }
    return 0;
}