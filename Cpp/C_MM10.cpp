#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float celsius, fahrenheit;
    while(cin >> celsius)
    {
        fahrenheit = celsius * 9 / 5 + 32;
        cout << fixed << setprecision(1) << fahrenheit << endl;
    }
    return 0;
}
