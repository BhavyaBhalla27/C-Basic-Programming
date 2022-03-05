// Default Constructor is a constructor which takes no parameters.

#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(int,int);        // Parameterized Constructor as it takes 2 parameters.
    void printNumber(){
        cout<<"The complex number is"<<endl;
        cout<<a<<"+"<<b<<"i";
    }
};
Complex :: Complex(int x,int y){
    a = x;
    b = y;
}
int main(){
    Complex c(3,4);    //Implicit call
    Complex b = Complex(3,4); //Explicit call
    // c.printNumber();
    b.printNumber();
    return 0;
}