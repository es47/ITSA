#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int hour, hour_salary;
    double salary;
    while(cin >> hour >> hour_salary)
    {
        if (hour <= 60)
            salary = hour_salary * hour;
        else if (hour > 60 && hour <= 120)
        {
            salary = hour_salary * 60;
            hour -= 60;
            salary += hour_salary * hour * 1.33;
        }
        else
        {
            salary = hour_salary * 60 + hour_salary * 60 * 1.33;
            hour -= 120;
            salary += hour_salary * hour * 1.66;
        }
        cout << fixed << setprecision(1) << salary << endl;
    }
    return 0;
}
