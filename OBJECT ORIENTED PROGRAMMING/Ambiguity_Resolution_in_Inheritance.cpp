#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "How are you? " << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};
class Derived : public Base1, public Base2
{
public:
    void greet()
    {
        Base2 ::greet(); // It will call greet function of Base2.
        Base1 ::greet(); // It will call greet function of Base1
    }
};
int main()
{
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet(); // This is ambigious and will give an error as greet() function is present in both Base1 and Base2 if we have not written lines 16-18.
    return 0;
}