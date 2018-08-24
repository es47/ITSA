#include <stdio.h>
int main()
{
    int i, j, s;
    while (scanf("%d", &i) != EOF)
    {
        s = 0;
        for (j = 1; j <= i; j++)
        {
            s = j * j;
            printf("%d*%d=%d\n", j, j, s);
        }
    }
    return 0;
}
