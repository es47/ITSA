#include <stdio.h>
int main()
{
    int n, s, c;
    while(scanf("%d", &n) != EOF)
    {
        s = n * n;
        c = s * n;
        printf("%d %d %d\n", n, s, c);
    }
    return 0;
}
