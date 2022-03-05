// Constructor is a special member function which the same name as that of class. It is used to initialize the objects of its class. It is automatically invoked.
#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(void);   //Constructor Declaration. It is a default Constructor as it takes no Parameter.
    void printNumber(){
        cout<<"Real part of complex number is "<<a;
        cout<<"Imaginary part of complex number is "<<b;
    }
};
Complex :: Complex(void){
    a = 10;
    b = 2; 
}
int main(){
    Complex c1;
    c1.printNumber();
    return 0;
}
