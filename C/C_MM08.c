#include <stdio.h>
int main()
{
    int n, m, s, sq;
    while(scanf("%d %d", &n, &m) != EOF)
    {
        s = n + m;
        sq = s * s;
        printf("%d\n", sq);
    }
    return 0;
}
