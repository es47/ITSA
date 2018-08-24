#include <stdio.h>
int main()
{
    int i, j;
    while (scanf("%d %d", &i, &j) != EOF)
    {
        if (i * i + j * j <= 10000)
            printf("inside\n");
        else
            printf("outside\n");
    }
    return 0;
}
