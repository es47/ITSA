#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    while(cin >> num1 >> num2)
    {
        cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;              //calculate sum
        cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;              //calculate product
        cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;              //calculate sub
        cout << num1 << "/" << num2 << "=";
        if (num1 < 0)                                                           //check num1 negative or not
            cout << num1 / num2 - 1 << "..." << num1 % num2 + num2 << endl;     //calculate division and moc
        else
            cout << num1 / num2 << "..." << num1 % num2 << endl;
    }
    return 0;
}
