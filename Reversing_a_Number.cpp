#include<iostream>
using namespace std;
int main(){
    int num,rem,rev=0;
    cout<<"Enter the number: ";
    cin>>num;
    while(num!=0){
        rem = num%10;
        num = num/10;
        rev = rev*10 + rem;
    }
    cout<<"Reversed Number is "<<rev;
    return 0;
}