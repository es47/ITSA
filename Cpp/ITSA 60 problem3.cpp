#include <iostream>

using namespace std;

int main()
{
    int S, N, M, Q, R, sum, i, j;
    cin >> S;
    while(S--)
    {
        cin >> N >> M;
        int full[N];
        for (i = 0; i < N; i++)
            cin >> full[i];
        for (i = 0; i < M; i++)
        {
            cin >> Q >> R;
            sum = 0;
            for (j = Q - 1; j < R; j++)
                sum += full[j];
            cout << sum << endl;
        }
    }
    return 0;
}
