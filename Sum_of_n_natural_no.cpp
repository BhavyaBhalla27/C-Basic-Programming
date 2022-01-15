#include<iostream>
using namespace std;
int main(){
    int n,sum;                                     //declaring n and sum as int variables
    cout<<"Enter the number of natural numbers: "; // printing message on the screen  
    cin>>n;                                        // taking n input
    sum = (n*(n+1))/2;                             // expression
    cout<<"Sum = "<<sum;                           // printing result on the screen
    return 0;
}