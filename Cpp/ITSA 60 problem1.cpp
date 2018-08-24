#include <iostream>

using namespace std;

int main()
{
    int n, year;
    cin >> n;
    while (n--)
    {
        cin >> year;
        if (year % 4 != 0)
            cout << "Common Year\n";
        else if (year % 100 == 0)
        {
            if (year % 400 != 0)
                cout << "Common Year\n";
            else
                cout << "Bissextile Year\n";
        }
        else
            cout << "Bissextile Year\n";
    }
    return 0;
}
