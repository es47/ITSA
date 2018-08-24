#include <iostream>

using namespace std;

int main()
{
    double distance, rate, time;
    while (cin >> distance)
    {
        rate = 1 - 30 * 2.54 / 100;
        time = distance / rate;
        if (time > (int)time)
            time++;
        cout << (int) time << endl;
    }
    return 0;
}
