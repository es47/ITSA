#include <iostream>

using namespace std;

int main()
{
    int time, day, hour, minute, second;
    while(cin >> time)
    {
        day = time / 24 / 60 / 60;
        time -= day * 24 * 60 * 60;
        hour = time / 60 / 60;
        time -= hour * 60 * 60;
        minute = time / 60;
        second = time - minute * 60;
        cout << day << " days\n";
        cout << hour << " hours\n";
        cout << minute << " minutes\n";
        cout << second << " seconds\n";
    }
    return 0;
}
