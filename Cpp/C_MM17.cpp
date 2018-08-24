#include <iostream>

using namespace std;

int main()
{
    int number1, number2, gcd, min, i;
    while(cin >> number1 >> number2)
    {
        gcd = 1;
        min = (number1 > number2)? number2: number1;
        for (i = 2; i <= min; i++)
            if (number1 % i == 0 && number2 % i == 0)
                gcd = i;
        cout << gcd << endl;
    }
    return 0;
}
