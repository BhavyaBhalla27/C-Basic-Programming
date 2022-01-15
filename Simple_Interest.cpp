#include<iostream>
using namespace std;
int main(){
    float P,R,T,SI;                         //declaring float variables
    cout<<"Enter the values of P,R and T: ";// displaying message on the screen
    cin>>P>>R>>T;                           // taking input from the user
    SI = (P*R*T)/100;                       // expression
    cout<<"Simple Interest = "<<SI;         // Displaying result on the screen
    return 0;                               
}