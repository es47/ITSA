#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float base, height, answer;
    while(cin >> base >> height)
    {
        answer = base * height / 2;
        cout << fixed << setprecision(1) << answer << endl;
    }
    return 0;
}
