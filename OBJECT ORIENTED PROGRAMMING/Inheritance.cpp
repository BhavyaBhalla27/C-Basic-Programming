
#include <iostream>
using namespace std;

class Employee
{ // Base Class
public:
    int id;
    float salary;
    Employee() {}
    Employee(int inpID)
    {
        id = inpID;
        salary = 34.0;
    }
    void getData()
    {
        cout << "The id of this person is " << id << endl;
    }
};
class Programmer : public Employee
{ // Derived Class
public:
    int languageCode = 9;
    Programmer(int inpID)
    {
        id = inpID;
    }
};
int main()
{
    Employee Bhavya(1), Ram(2);
    Programmer Eeshu(3);
    cout << Eeshu.languageCode << endl;
    cout << Bhavya.salary << endl;
    cout << Ram.salary << endl;
    Eeshu.getData();
    
    return 0;
}