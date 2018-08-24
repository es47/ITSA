#include <iostream>

using namespace std;

int main()
{
    int number, i;
    while(cin >> number)
    {
        for (i = 1; i <= number; i++)
            cout << i << "*" << i << "=" << i * i << endl;
    }
    return 0;
}
