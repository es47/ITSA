#include <iostream>

using namespace std;

int main()
{
    int number1, number2, i, sum, max, min;
    while(cin >> number1 >> number2)
    {
        sum = 0;
        max = (number1 > number2)? number1: number2;
        min = (number1 > number2)? number2: number1;
        for (i = min; i <= max; i++)
            sum += i;
        cout << sum << endl;
    }
    return 0;
}
