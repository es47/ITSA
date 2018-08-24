#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int time;
    double cost;
    while(cin >> time)
    {
        cost = time * 0.9;
        if (time > 800 && time < 1500)
            cost *= 0.9;
        if (time >= 1500)
            cost *= 0.79;
        cout << fixed << setprecision(1) << cost << endl;
    }
    return 0;
}
