// ax^2 + bx + c = 0
// D = sqrt((b*b) - (4*a*c))
// r1 = (-b+D)/(2*a);
// r2 = (-b-D)/(2*a);
#include<iostream>
#include<cmath>                                             //including math functions from cmath header file
using namespace std;
int main(){
    int a,b,c;                                              // declaring int variables a,b and c
    float D,r1,r2;                                          // declaring float variables D,r1 and r2
    cout<<"Enter the values of a,b and c: ";                // Displaying message on the screen
    cin>>a>>b>>c;                                           // Taking input from user
    D = sqrt((b*b) - (4*a*c));                              // expression
    r1 = (-b+D)/(2*a);                                      // expression
    r2 = (-b-D)/(2*a);                                      // expression
    cout<<"The roots of the equation are: "<<r1<<"and"<<r2; // Displaying result on the screen
    return 0;   
}