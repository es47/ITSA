#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int mile;
    double kilometer;
    while(cin >> mile)
    {
        kilometer = mile * 1.6;
        cout << fixed << setprecision(1) << kilometer << endl;
    }
    return 0;
}
