#include <iostream>

using namespace std;

int main()
{
    long long int number, answer, i;
    while(cin >> number)
    {
        answer = 1;
        for (i = 2; i <= number; i++)
            answer *= i;
        cout << answer << endl;
    }
    return 0;
}
