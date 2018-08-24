#include <stdio.h>
int main()
{
    int i, h, t, j;
    while (scanf("%d", &i) != EOF)
    {
        h = i / 100;
        t = i / 10 % 10;
        j = i % 10;
        if (i == h * h * h + t * t * t + j * j * j)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
