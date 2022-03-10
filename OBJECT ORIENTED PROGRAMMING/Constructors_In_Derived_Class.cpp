#include <iostream>
using namespace std;
class Base1
{
    int data1;

public:
    Base1(int i)
    { // Base1 Class Constructor
        data1 = i;
        cout << "Base1 class constructor is called" << endl;
    }
    void printData1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    { // Base2 Class Constructor
        data2 = i;
        cout << "Base2 class constructor is called" << endl;
    }
    void printData2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};
// class Derived:public Base2,public Base1                     // Base2 Constructor is called first.
// class Derived:public Base1,virtual public Base2             // Base2 constructor is called first.
class Derived : public Base1, public Base2
{ // Multiple Inheritance. If we change the order of Base1 and Base2 here, then Base2 constructor will be called first.
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    { // Derived Class Constructor. Changing the order here wont call Base2 Constructor first.
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor is called" << endl;
    }
    void printDataDerived()
    {
        cout << "The value of data is derived1 is  " << derived1 << endl;
        cout << "The value of data is derived2 is  " << derived2 << endl;
    }
};
int main()
{
    Derived bhavya(1, 2, 3, 4);
    bhavya.printData1();
    bhavya.printData2();
    bhavya.printDataDerived();
    return 0;
}