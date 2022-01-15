// A perfect number is a number whose sum of divisors excluding the number itself is equal to the number itself. Ex - 6,28 etc
#include<iostream>
using namespace std;
int main(){
    int num,i=1,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    
    while(i<num){
        
        if(num%i==0){
        sum = sum + i;
        }
        i++;
    }
    if(sum==num){
        cout<<"Perfect Number";
    }
    else{
        cout<<"Not a perfect number";
    }
    return 0;
}