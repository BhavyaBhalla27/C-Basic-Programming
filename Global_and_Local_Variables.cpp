#include<iostream>
using namespace std;
int x=20;               //Global variable
void fun(){ 
    int a=5;            // Local Variable
    x = x+a;
    
}
int main(){
    x = 15;
    fun();
    x++;
    cout<<x;
    return 0;
}