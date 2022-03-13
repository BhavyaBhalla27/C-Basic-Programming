#include<iostream>
using namespace std;
class BaseClass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying base class variable "<<var_base<<endl;
    }

};
class DerivedClass:public BaseClass{
     public:
    int var_derived;
    void display(){
        cout<<"Displaying base class variable "<<var_base<<endl;
        cout<<"Displaying derived class variable "<<var_derived<<endl;
    }

};
int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;                // Pointer from object of base class to object of derived class
    base_class_pointer->var_base = 34;
    base_class_pointer->display();                    // Base class function will run...
    //base_class_pointer->var_derived=32;             // Not valid...Throws an error.
    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 31;            // We can access the data members of base class 
    derived_class_pointer->var_derived=98;           // We can access the data members of derived class
    
    derived_class_pointer->display();                // DerivedClass display function will run...
    return 0;
}