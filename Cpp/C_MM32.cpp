#include <iostream>

using namespace std;

int main()
{
    int number, hundred, ten, one, armstrong;
    while(cin >> number)
    {
        hundred = number / 100;
        ten = number % 100 / 10;
        one = number % 10;
        armstrong = hundred * hundred * hundred + ten * ten * ten + one * one * one;
        if (armstrong == number)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
