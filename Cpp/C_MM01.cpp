#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float upper_end, lower_end, height, answer;
    while (cin >> upper_end >> lower_end >> height)
    {
        answer = (upper_end + lower_end) * height / 2;
        cout << "Trapezoid area:";
        cout << fixed <<  setprecision(1) << answer << endl;
    }
}
