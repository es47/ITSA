#include <iostream>

using namespace std;

int main()
{
    int number, i;
    while(cin >> number)
    {
        for (i = 1; i <= number; i++)
        {
            if (i % 35 == 0 && i / 35 == 1)
                cout << i;
            if (i % 35 == 0 && i / 35 > 1)
                cout << " " << i;
        }
        cout << endl;
    }
    return 0;
}
