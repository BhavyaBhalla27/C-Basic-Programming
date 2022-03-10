#include<iostream>
using namespace std;
class Complex{
    int real,imaginary;
    public:
    void getData(){
        cout<<"The real part of the this complex number is "<<real<<endl;
        cout<<"The imaginary part of the this complex number is "<<imaginary<<endl;
    }
    void setData(int a,int b){
        real = a;
        imaginary = b;
    }
};
int main(){
    // Complex c1;
    // Complex *ptr = &c1;    // Pointer to object c1...
    Complex *ptr = new Complex;   // Makes object 
    // (*ptr).setData(1,54);
    ptr->setData(1,54);         // Arrow Operator
    ptr->getData();
    // (*ptr).getData();
    return 0;
}   