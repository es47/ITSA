#include <iostream>

using namespace std;

int main()
{
    int number1, number2, answer;
    while(cin >> number1 >> number2)
    {
        answer = number1 + number2;
        answer *= answer;
        cout << answer << endl;
    }
    return 0;
}
