#include <iostream>

using namespace std;

int main()
{
    int number, i, flag;
    while(cin >> number)
    {
        flag = 1;
        for (i = 2; i < number; i++)
            if (number % i == 0)
                flag = 0;
        if (flag == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
