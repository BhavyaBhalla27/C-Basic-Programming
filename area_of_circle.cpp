#include<iostream>
using namespace std;
int main(){
    float radius,area;                          // declaring variables
    cout<<"Enter the radius of the circle: ";   // displaying message on the screen
    cin>>radius;                                // taking input from user
    area = 3.14*radius*radius;                  // expression   
    cout<<"The area of the circle is "<<area;   // displaying result
    return 0;
}