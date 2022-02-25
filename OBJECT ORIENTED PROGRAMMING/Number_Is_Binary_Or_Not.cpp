#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter the binary number: " << endl;
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect format";
            exit(0);
        }
    }
}
void binary ::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "The binary number is" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary num;
    num.read();
    // num.chk_bin();
    cout << "Before ones complement ";
    num.display();
    cout << endl;
    num.ones_complement();
    cout << endl;
    cout << "After ones complement ";
    num.display();
    cout << endl;
    return 0;
}