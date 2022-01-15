#include<iostream>
using namespace std;
int main(){
    int p,b;                                                //declaring p and b as integers
    float area;                                             // declaring area as decimal
    cout<<"Enter the perpendicular length of triangle: ";   //printing message on the screen
    cin>>p;                                                 // Taking input from user
    cout<<"Enter the base length of triangle: ";            // prinint message on screen
    cin>>b;                                                 // Taking input from user
    area = (float)(p*b)/2;                                  // expression
    cout<<"The area of Triangle is "<<area;                 // Displaying result on the screen
    return 0;
}