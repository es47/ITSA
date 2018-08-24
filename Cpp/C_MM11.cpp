#include <iostream>

using namespace std;

int main()
{
    int money, ten, five, one;
    while(cin >> money)
    {
        ten = money / 10;
        five = money % 10 / 5;
        one = money % 5 / 1;
        cout << "NT10=" << ten << endl;
        cout << "NT5=" << five << endl;
        cout << "NT1=" << one << endl;
    }
    return 0;
}
