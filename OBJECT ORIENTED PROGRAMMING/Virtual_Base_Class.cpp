#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void setNumber(int n)
    {
        roll_number = n;
    }
    void printNumber()
    {
        cout << "Your roll number is " << roll_number << endl;
    }
};
class test : virtual public student
{ // Virtual Base Class....
protected:
    float maths, physics;

public:
    void setMarks(float a, float b)
    {
        maths = a;
        physics = b;
    }
    void printMarks()
    {
        cout << "Your marks in maths and physics are " << maths << " and " << physics << endl;
    }
};
class sports : virtual public student
{ // Virtual Base Class....
protected:
    float score;

public:
    void setScore(float sc)
    {
        score = sc;
    }
    void printScore()
    {
        cout << "Your PT score is " << score << endl;
    }
};
class result : public test, public sports
{
private:
    float total;

public:
    void display()
    {
        total = (maths + physics + score) / 3;
        printNumber(); // If we didn't make the virtual base class, then it will throw us an error.
        printMarks();
        printScore();
        cout << "Total score is " << total << "%" << endl;
    }
};
int main()
{
    result Bhavya;
    Bhavya.setMarks(100, 100);
    Bhavya.setScore(98);
    Bhavya.setNumber(1); // If we didn't make the virtual base class, then it will throw us an error.
    Bhavya.display();
    return 0;
}