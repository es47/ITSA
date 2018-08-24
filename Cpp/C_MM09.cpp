#include <iostream>

using namespace std;

int main()
{
    int number, answer, i;
    while(cin >> number)
    {
        if (number > 31)
        {
            cout << "Value of more than 31\n";
            continue;
        }
        answer = 1;
        for (i = 0; i < number; i++)
            answer *= 2;
        cout << answer << endl;
    }
    return 0;
}
