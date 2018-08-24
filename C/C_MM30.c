#include <stdio.h>
int main()
{
    int i, j, flag;
    while (scanf("%d", &i) != EOF)
    {
        flag = 0;
        for (j = i - 1; j > 2; j--)
        {
            if (i % j == 0)
                flag = 1;
            if (flag == 1) break;
        }
        if (flag == 1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
