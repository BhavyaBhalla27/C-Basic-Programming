#include <iostream>
using namespace std;
class BankDeposit
{
    int principal, years;
    float interestRate, returnValue;

public:
    
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};
BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
void BankDeposit::show()
{
    cout << "The principal amount was" << principal << endl;
    cout << "Return value after " << years << " year is " << returnValue;
}

int main()
{

    int p, y;
    float r;
    int R;
    cout << "Enter the value of p,y and r" << endl;
    cin >> p >> y >> r;
    BankDeposit bd1(p, y, r);
    bd1.show();
    cout << "Enter p,y and R" << endl;
    cin >> p >> y >> R;
    BankDeposit bd2(p, y, R);
    bd2.show();
    return 0;
}