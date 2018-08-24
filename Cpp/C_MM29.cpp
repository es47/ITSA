#include <iostream>

using namespace std;

int main()
{
    int number, i, answer, flag, j;
    while(cin >> number)
    {
        for (i = number - 1; i > 1; i--)
        {
            flag = 1;
            for (j = 2; j < i; j++)
                if (i % j == 0)
                    flag = 0;
            if (flag == 1)
            {
                answer = i;
                break;
            }
        }
        cout << answer << endl;
    }
    return 0;
}
