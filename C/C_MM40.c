#include <stdio.h>
int main()
{
    int i, j, s;
    while (scanf("%d", &i) != EOF)
    {
        s = 0;
        for (j = 1; j <= i; j++)
            s += j;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
            if (j != i)
                printf("+ ");
        }
        printf("= %d\n", s);
    }
    return 0;
}
