#include<iostream>
using namespace std;
int main(){
    int num,rem,rev=0,temp;
    cout<<"Enter the number: ";
    cin>>num;
    temp = num;
    while(num!=0){
        rem = num%10;
        num = num/10;
        rev = rev*10 + rem;
    }
    if(temp==rev){
        cout<<"Palindrome";
        }
    else{
        cout<<"Not a Palindrome";
    }    
    return 0;
}