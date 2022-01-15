#include<iostream>
using namespace std;
int main(){
    int l,b,perimeter;                                          // declaring int variables
    cout<<"Enter the length and breadth of rectangle: ";        // displaying message on the screen
    cin>>l>>b;                                                  // taking input from user
    perimeter = 2*(l+b);                                        // expression
    cout<<"perimeter = "<<perimeter;                            // displaying result on the screen
    return 0;
}