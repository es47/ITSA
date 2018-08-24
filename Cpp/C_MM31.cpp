#include <iostream>

using namespace std;

int main()
{
    int number, sum, i;
    while(cin >> number)
    {
        sum = 0;
        for (i = 1; i <= number; i++)
        {
            if (i % 2 == 0 && i % 3 == 0)
                sum += i;
            if (i % 12 == 0)
                sum -= i;
        }
        cout << sum << endl;
    }
    return 0;
}
