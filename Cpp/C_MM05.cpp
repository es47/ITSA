#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double length, answer;
    while(cin >> length)
    {
        answer = length * length * 10 + 0.5;
        answer /= 10;
        cout << fixed << setprecision(1) << answer << endl;
    }
    return 0;
}
