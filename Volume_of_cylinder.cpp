#include<iostream>
using namespace std;
int main(){
    float r,h,volume;                                  //declaring float variables         
    cout<<"Enter the values of radius and height: ";   // displaying message on the screen
    cin>>r>>h;                                         // taking input from the user
    volume = 3.14*r*r*h;                               // expression
    cout<<"The volume of cylinder is "<<volume;        // displaying result on the screen
    return 0;  
}