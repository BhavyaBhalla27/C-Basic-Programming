#include<iostream>
using namespace std;
int main(){
    int num,i=1,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Sum of factors of "<<num<<" is : ";
    while(i<=num){
        
        if(num%i==0){
        sum = sum + i;
        }
        i++;
    }
    cout<<sum;
    return 0;
}