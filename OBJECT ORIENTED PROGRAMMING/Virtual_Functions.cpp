#include<iostream>
using namespace std;
class BaseClass{
    public:
    int var_base;
    virtual void display(){                                   // Virtual Functions.. Used to achieve Run Time Polymorphism..
        cout<<"Displaying base class variable "<<var_base<<endl;
    }

};
class DerivedClass:public BaseClass{
     public:
    int var_derived=32;
    void display(){
        cout<<"Displaying base class variable "<<var_base<<endl;
        cout<<"Displaying derived class variable "<<var_derived<<endl;
    }

};
int main(){
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->var_base=34;
    base_class_pointer->display();              // If we didn't make the display function of base class virtual, then display function of base class will run...
    return 0;
}