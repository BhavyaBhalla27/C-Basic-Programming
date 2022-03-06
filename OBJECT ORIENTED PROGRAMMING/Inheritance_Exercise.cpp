/*Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?    --> Multiple Inheritance
    Q2. Which mode of Inheritance are you using?   --> Public
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?       --> All functions are used */
#include <iostream>
#include <math.h>
using namespace std;
class SimpleCalculator
{
protected:
    int a, b;

public:
    void setData(float x, float y)
    {
        a = x;
        b = y;
    }
    void addNumbers()
    {
        cout << "The addition of two numbers is " << a + b << endl;
    }
    void subNumbers()
    {
        cout << "The subtraction of two numbers is " << a - b << endl;
    }
    void mulNumbers()
    {
        cout << "The multiplication of two numbers is " << a * b << endl;
    }
    void divNumbers()
    {
        cout << "The division of two numbers is " << a / b << endl;
    }
};
class ScientificCalculator
{
protected:
    int x, y;

public:
    void setData1(float c, float d)
    {
        x = c;
        y = d;
    }
    void sqrt_number()
    {
        cout << "The square root of the entered number is " << sqrt(x) << endl;
        cout << "The square of the second entered number is " << sqrt(y) << endl;
    }
    void log_number()
    {
        cout << "The log of the entered number is " << log10(x);
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void display()
    {
        addNumbers();
        subNumbers();
        mulNumbers();
        divNumbers();
        sqrt_number();
        log_number();
    }
};
int main()
{
    HybridCalculator Bhavya;
    Bhavya.setData(5, 4);
    Bhavya.setData1(4, 9);
    Bhavya.display();

    return 0;
}