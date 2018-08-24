#include <iostream>

using namespace std;

int main()
{
    int start_hour, start_minute, end_hour, end_minute, cost;
    double total_time;
    while(cin >> start_hour >> start_minute >> end_hour >> end_minute)
    {
        total_time = (end_hour - start_hour) * 60 + end_minute - start_minute;
        total_time /= 60;
        if (total_time <= 2)
        {
            total_time /= 0.5;
            cost = (int)total_time * 30;
        }
        else if (total_time > 2 && total_time <= 4)
        {
            total_time -= 2;
            total_time /= 0.5;
            cost = 30 * 4 + (int)total_time * 40;
        }
        else
        {
            total_time -= 4;
            total_time /= 0.5;
            cost = 30 * 4 + 40 * 4 + (int)total_time * 60;
        }
        cout << cost << endl;
    }
    return 0;
}
