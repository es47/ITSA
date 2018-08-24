#include <iostream>

using namespace std;

int main()
{
    int decimal, i, binary[8], flag;
    while(cin >> decimal)
    {
        flag = 0;
        if (decimal < 0)
            flag = 1;
        for (i = 0; i < 8; i++)
        {
            binary[8 - i - 1] = decimal % 2;
            decimal /= 2;
        }
        if (flag == 1)
        {
            for (i = 0; i < 8; i++)
            {
                if (binary[i] == 0)
                    binary[i] = 1;
                else
                    binary[i] = 0;
            }
            binary[7]++;
            for (i = 7; i >= 0; i--)
                if (binary[i] == 2)
                {
                    binary[i] = 0;
                    binary[i - 1]++;
                }
        }
        for (i = 0; i < 8; i++)
            cout << binary[i];
        cout << endl;
    }
    return 0;
}
