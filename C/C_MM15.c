#include <stdio.h>
int main()
{
    int i, j;
    while (scanf("%d %d", &i, &j) != EOF)
    {
        if (i <= 100 && j <= 100 && i >= 0 && j >= 0)
            printf("inside\n");
        else
            printf("outside\n");
    }
    return 0;
}
