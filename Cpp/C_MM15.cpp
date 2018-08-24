#include <iostream>

using namespace std;

int main()
{
    int x, y;
    while(cin >> x >> y)
    {
        if (x <= 100 && y <= 100)
            cout << "inside\n";
        else
            cout << "outside\n";
    }
    return 0;
}
