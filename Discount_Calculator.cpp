#include<iostream>
using namespace std;
int main(){
    int amount;
    float discount;
    cout<<"Enter the amount: ";
    cin>>amount;
    if(amount<100){
        cout<<"No discount";
    }
    else if(amount>=100&&amount<500){
        discount = 0.1*amount;
        cout<<"Discount = "<<discount;

    }
    else if(amount>=500){
        discount = 0.2*amount;
        cout<<"Discount = "<<discount;
    }
    return 0;
}