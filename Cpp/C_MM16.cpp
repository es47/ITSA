#include <iostream>

using namespace std;

int main()
{
    int x, y;
    while(cin >> x >> y)
    {
        if (x < 0)
            x = -x;
        if (y < 0)
            y = -y;
        if (x * x + y * y <= 40000)
            cout << "inside\n";
        else
            cout << "outside\n";
    }
    return 0;
}
