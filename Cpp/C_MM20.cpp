#include <iostream>

using namespace std;

int main()
{
    int decimal, hexadecimal[10], count;
    while(cin >> decimal)
    {
        count = 0;
        while(decimal != 0)
        {
            hexadecimal[count] = decimal % 16;
            decimal /= 16;
            count++;
        }
        for (--count; count >= 0; count--)
        {
            if (hexadecimal[count] < 10)
                cout << hexadecimal[count];
            else
            {
                hexadecimal[count] = hexadecimal[count] - 10 + 'A';
                cout << (char)hexadecimal[count];
            }
        }
        cout << endl;
    }
    return 0;
}
