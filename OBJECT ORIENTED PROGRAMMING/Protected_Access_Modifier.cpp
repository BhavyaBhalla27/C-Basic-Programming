#include<iostream>
using namespace std;
class Base{
    protected:            // Behaves just like protected but can be inherited.
        int a;
    private:
        int b;

};
class Derived : protected Base{

};
int main(){
    Base b;
    Derived d;
    //cout<<b.a;  // Gives an error as a is protected.
    return 0;
}