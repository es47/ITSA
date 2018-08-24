#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, i;
    string input;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        getline(cin, input);
        for (i = input.size() - 1; i >= 0; i--)
            cout << input[i];
        cout << endl;
    }
    return 0;
}
