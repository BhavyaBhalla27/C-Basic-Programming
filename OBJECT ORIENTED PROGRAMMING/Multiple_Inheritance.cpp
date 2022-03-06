#include <iostream>
using namespace std;
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Derived : public Base1, public Base2
{ // Syntax of Multiple Inheritance
public:
    void show()
    {
        cout << "The value of base1 is " << base1int << endl;

        cout << "The value of base1 is " << base2int << endl;
        cout << "The sum of the values is " << (base1int + base2int) << endl;
    }
};
int main()
{
    Derived number;
    number.set_base1int(1); // public members get inherited in public in public derivation
    // number.base1int;          //gives an error as protected members are inherited as protected in public derivation
    // number.base2int;          //gives an error as protected members are inherited as protected in public derivation
    number.set_base2int(2); // public members get inherited in public in public derivation
    number.show();
    return 0;
}