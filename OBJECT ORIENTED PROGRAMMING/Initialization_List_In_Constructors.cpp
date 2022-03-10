#include <iostream>
using namespace std;
/*
    Syntax for Initialization List is --> class-name(int i,int j):a(i),b(j){
        Constructor-Body;
    }
*/
class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : a(i+b), b(j)        // Throws an error.
    // Test(int i, int j) : b(j), a(i+b)          // Throws an error because a is intitialized first and then b.
    Test(int i, int j) : a(i), b(a+j)
    { // value of i is assigned to a and value of j is assigned to b.
        cout << "Constructor is executed" << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};
int main()
{
    Test t1(2, 3);
    return 0;
}