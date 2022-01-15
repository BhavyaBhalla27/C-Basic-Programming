#include<iostream>
using namespace std;
int main(){
    int num,rem,sum=0,temp;
    cout<<"Enter the number: ";
    cin>>num;
    temp = num;
    while(num!=0){
        rem = num%10;
        num = num/10;
        sum = sum + (rem*rem*rem);
    }
    if(sum==temp){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not Armstrong Number";
    }
    return 0;
}