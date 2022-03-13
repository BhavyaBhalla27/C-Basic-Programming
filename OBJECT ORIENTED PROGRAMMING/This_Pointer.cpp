// this is a keyword which is a pointer which points to the object which invokes the member function.
#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A& setData(int a){
        //a = a;             // This will give not give us an error but if we give it some value, it will print some garbage value.
        this->a = a;         // This will give us the value we entered inside the paranthesis.
        return *this;
        }
    void getData(){
        cout<<"The value of a is "<<a<<endl;

    }
};
int main(){
    A a;            // Creating an object of class A...
    a.setData(2).getData(); // a.setData(2) is returning an object due to this pointer...
    a.getData();
    return 0;
}