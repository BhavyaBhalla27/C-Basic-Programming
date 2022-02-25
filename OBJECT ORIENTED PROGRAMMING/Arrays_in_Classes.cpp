#include <iostream>
using namespace std;

class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter ID of your item: " << endl;
    cin >> itemID[counter];
    cout << "Enter Price of your item: " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with ID " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop Store;
    Store.initCounter();
    Store.setPrice();
    Store.setPrice();
    Store.setPrice();
    Store.displayPrice();
    return 0;
}