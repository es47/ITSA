#include <stdio.h>
int main()
{
    int i, j, s;
    while (scanf("%d", &i) != EOF)
    {
        s = 0;
        for (j = 1; j <= i; j++)
            if(j % 3 == 0)
                s += j;
        printf("%d\n", s);
    }
    return 0;
}
