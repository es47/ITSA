#include <stdio.h>
int main()
{
    int i, j, k;
    while (scanf("%d", &i) != EOF)
    {
        if (i > 31)
            printf("Value of more than 31\n");
        else
        {
            k = 2;
            for(j = 1; j < i; j++)
                k *= 2;
            printf("%d\n", k);
        }
    }
    return 0;
}
