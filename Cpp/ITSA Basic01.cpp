#include<iostream>
#include<string>

using namespace std;

int main()
{
    string LED_NUM[10][5];

    LED_NUM[0][0] = "*****";
    LED_NUM[0][1] = "*   *";
    LED_NUM[0][2] = "*   *";
    LED_NUM[0][3] = "*   *";
    LED_NUM[0][4] = "*****";

    LED_NUM[1][0] = "    *";
    LED_NUM[1][1] = "    *";
    LED_NUM[1][2] = "    *";
    LED_NUM[1][3] = "    *";
    LED_NUM[1][4] = "    *";

    LED_NUM[2][0] = "*****";
    LED_NUM[2][1] = "    *";
    LED_NUM[2][2] = "*****";
    LED_NUM[2][3] = "*    ";
    LED_NUM[2][4] = "*****";

    LED_NUM[3][0] = "*****";
    LED_NUM[3][1] = "    *";
    LED_NUM[3][2] = "*****";
    LED_NUM[3][3] = "    *";
    LED_NUM[3][4] = "*****";

    LED_NUM[4][0] = "*   *";
    LED_NUM[4][1] = "*   *";
    LED_NUM[4][2] = "*****";
    LED_NUM[4][3] = "    *";
    LED_NUM[4][4] = "    *";

    LED_NUM[5][0] = "*****";
    LED_NUM[5][1] = "*    ";
    LED_NUM[5][2] = "*****";
    LED_NUM[5][3] = "    *";
    LED_NUM[5][4] = "*****";

    LED_NUM[6][0] = "*****";
    LED_NUM[6][1] = "*    ";
    LED_NUM[6][2] = "*****";
    LED_NUM[6][3] = "*   *";
    LED_NUM[6][4] = "*****";

    LED_NUM[7][0] = "*****";
    LED_NUM[7][1] = "    *";
    LED_NUM[7][2] = "    *";
    LED_NUM[7][3] = "    *";
    LED_NUM[7][4] = "    *";

    LED_NUM[8][0] = "*****";
    LED_NUM[8][1] = "*   *";
    LED_NUM[8][2] = "*****";
    LED_NUM[8][3] = "*   *";
    LED_NUM[8][4] = "*****";

    LED_NUM[9][0] = "*****";
    LED_NUM[9][1] = "*   *";
    LED_NUM[9][2] = "*****";
    LED_NUM[9][3] = "    *";
    LED_NUM[9][4] = "    *";

    string s;
    while (cin >> s)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < s.length(); j++)
            {
                if (j > 0)
                    cout << " ";
                cout << LED_NUM[s[j] - '0'][i];
                if(j == s.length() - 1)
                    cout << endl;
            }
        }
    }
    return 0;
}
