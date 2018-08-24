#include <stdio.h>
int main()
{
    int i, j, s;
    while(scanf("%d %d", &i, &j) != EOF)
    {
        s = i + j;
        printf("%d\n", s);
    }
    return 0;
}
