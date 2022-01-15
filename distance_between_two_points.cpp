#include<iostream>
#include<cmath>

using namespace std;
int main(){
    float x1,y1,x2,y2,d;                        // declaring float var
    cout<<"Enter the values of x1,y1,x2,y2: ";  // display message on screen
    cin>>x1>>y1>>x2>>y2;                        // input from user
    d = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));  // expression
    cout<<"Distance = "<<d;                         // result on screen

    return 0;
}