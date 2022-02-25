#include <iostream>
using namespace std;
class Employee
{
private: // Variables inside private can be accessed by functions inside the class only
    int a, b, c;

public: // Variables inside public can be accessed anywhere
    int d, e;
    void setData(int a1, int b1, int c1); // Declaration of a function
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{ // Definition of function of class Employee
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee bhavya; // Declaring an object of class Employee
    // bhavya.a = 20;                                // Will throw an example as a is private.
    bhavya.d = 34;
    bhavya.e = 64;
    bhavya.setData(1, 2, 3);
    bhavya.getData();
    return 0;
}