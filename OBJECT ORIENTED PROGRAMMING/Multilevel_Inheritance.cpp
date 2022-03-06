// Multilevel Inheritance
#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_number(int);
    void get_roll_number(void);
};
void Student ::set_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam ::set_marks(float a, float b)
{
    maths = a;
    physics = b;
}
void Exam ::get_marks()
{
    cout << "The marks obtained in maths and physics are " << maths << " and " << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    Result Bhavya;
    Bhavya.set_number(4);
    Bhavya.set_marks(99, 98);
    Bhavya.display();
    return 0;
}