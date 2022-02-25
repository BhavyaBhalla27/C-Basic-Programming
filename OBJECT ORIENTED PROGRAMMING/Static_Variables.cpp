#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // by default has zero value and this will be applicable to all objects
    // static int count = 100; --> This will throw an error.
public:
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of the Employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void)
    { // It is a static function which has access to count variable which is also static
        // cout<<id;     --> This will throw an error as id is not a static variable
        cout << "The value of count is " << count << endl;
    }
};

int Employee ::count = 1000; // static variable outside of the class. Here we can give some value other than 0 i.e. the default value.
int main()
{
    Employee bhavya, harry;
    bhavya.setData();
    bhavya.getData();
    Employee::getCount();
    Employee::getCount();
    harry.setData();
    harry.getData();
    Employee::getCount();
    return 0;
}