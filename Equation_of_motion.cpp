// (v*v) = (u*u) + (2*a*s);
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int u,a,s;                                                                          //declaring integer variables
    float v;                                                                            // declaring float variable
    cout<<"Enter the value of initial velocity,acceleration and distance covered: ";    // displaying message on the screen
    cin>>u>>a>>s;                                                                       // taking input from the user   
    v = (float)sqrt((u*u) + (2*a*s));                                                   // expression
    cout<<"Final velocity = "<<v<<" m/s";                                               // Displaying result on the screen
    return 0;
}