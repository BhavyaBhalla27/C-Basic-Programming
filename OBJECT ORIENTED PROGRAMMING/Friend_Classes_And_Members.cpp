#include<iostream>
using namespace std;

class Complex;
class Calculator{
    public:
    int add(int a,int b){
        return (a+b);
    }
    int sumRealComplex(Complex,Complex); // If we have not declared the 4th line, then it would give us an error.
    int sumImaginaryComplex(Complex,Complex);
};
class Complex{
    int a,b;
    // Making functions friend individually.
    friend int Calculator :: sumRealComplex(Complex, Complex);    //Giving permission to sumRealComplex function to access private data of Class Complex
    friend int Calculator :: sumImaginaryComplex(Complex, Complex);
    // Aliter : Declaring the entire calculator class as friend
    friend class Calculator;     // Making the class as friend
    public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    

};
int Calculator :: sumRealComplex(Complex o1,Complex o2){
    return (o1.a+o2.a);
}
int Calculator :: sumImaginaryComplex(Complex o1,Complex o2){
    return (o1.b+o2.b);
}
int main(){
    Complex o1,o2;
    o2.setNumber(1,3);
    o1.setNumber(2,4);
    Calculator c1;
    int real = c1.sumRealComplex(o1,o2);
    int imaginary = c1.sumImaginaryComplex(o1,o2);
    cout<<"The sum of real parts of Complex Number is "<<real;
    cout<<"The sum of imaginary parts of Complex Number is "<<imaginary;

    return 0;
}