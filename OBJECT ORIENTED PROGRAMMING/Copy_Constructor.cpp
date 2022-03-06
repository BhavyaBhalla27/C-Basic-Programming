#include<iostream>
using namespace std;
class Number{
    int a;
    public: 
        Number(){
            a=0;
        }      // default constructor which runs without any input.    
        Number(int num){
            a=num;
        }
        Number(Number &obj){                        // Copy constructor 
            cout<<"Copy constructor called !!"<<endl;
            a = obj.a;
        }
        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};
int main(){
    Number x,y,z(3),z2;     // This will give an error if we didn't make the default constructor.
    z.display();
    x.display();
    y.display();
    Number z1(x);       // if copy constructor is not found, this will not give an error.
    z1.display();
    z2 = z;            // Copy constructor will not be invoked. We assigned already declared object to z.
    Number z3 = z;     // Copy constructor will be invoked as the object z3 is being created.
    return 0;
}