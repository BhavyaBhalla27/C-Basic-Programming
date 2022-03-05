#include <iostream>
using namespace std;
class data
{
    int data1, data2;

public:
    data(int x, int y = 9)
    { // Setting the default value of y to 9.
        data1 = x;
        data2 = y;
    }
    void printData()
    {
        cout << "The value of data1 and data 2 is " << data1 << " and " << data2 << endl;
    }
};
int main()
{
    data d1(1);
    d1.printData();
    data d2(1, 8);
    d2.printData(); // This will print 1 and 8 because we have passed 8 as second parameter which overwrites the value of y.
    return 0;
}