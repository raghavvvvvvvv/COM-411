#include <iostream>
using namespace std;
struct calculator
{
    int sum;
    int subtraction;
    int product;
    int division;
};

int main()
{
    calculator c;
    int i, a, b;
    while (1)
    {
         cout << "Enter the two numbers: ";
        cin >> a >> b;
        cout << "1.Sum 2.Subtraction 3.product 4.Division" << endl;
        cout << "Select the number of operation you want to perform: ";
        cin >> i;
        switch (i)
        {
        case 1:
            c.sum = a + b;
            cout << "Addition of " << a << " and " << b << " is :" << a + b << endl;
            break;
        case 2:
            c.subtraction = a - b;
            cout << "Subtraction of " << a << " and " << b << " is :" << a - b << endl;
            break;
        case 3:
            c.product = a * b;
            cout << "Multiplication of " << a << " and " << b << " is :" << a * b << endl;
            break;
        case 4:
            c.division = a / b;
            cout << "Division of " << a << " and " << b << " is :" << a / b << endl;
            break;
        default:
            cout << "Invalid" << endl;
        }
    }
    return 0;
}