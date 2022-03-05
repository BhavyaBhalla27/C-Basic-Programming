// Constructor Overloading
#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printNumber()
    {
        cout << "The complex number is " << a << " + " << b << "i";
    }
};
int main()
{
    Complex c1;
    c1.printNumber();
    cout << endl;
    Complex c2(2);
    c2.printNumber();
    cout << endl;
    Complex c3(2, 3);
    c3.printNumber();
    cout << endl;

    return 0;
}