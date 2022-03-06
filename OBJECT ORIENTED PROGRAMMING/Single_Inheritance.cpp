#include <iostream>
using namespace std;
class Base
{
    int data1; // This is private and can not be inherited.
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}
int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}
class Derived : public Base
{ // Class is being derived publically.
    int data3;

public:
    void process();
    void display();
};
void Derived ::process()
{
    data3 = data2 * getData1();
}
void Derived ::display()
{
    cout << "Value of data1 is " << getData1() << endl; // We are calling data1 by function because data1 was private and can not be inherited. But data1 can be accessed by a function called getData1() which is a public member.
    cout << "Value of data2 is " << data2 << endl;
    cout << "Value of data3 is " << data3 << endl;
}
int main()
{
    Derived der; // Object of derived class.
    der.setData();
    der.process();
    der.display();
    return 0;
}