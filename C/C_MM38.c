#include <stdio.h>
int main()
{
    int i, j, k, flag;
    while (scanf("%d %d %d", &i, &j, &k) != EOF)
    {
        flag = 0;
        if (i >= j + k)
            flag = 1;
        if (j >= i + k)
            flag = 1;
        if (k >= i + j)
            flag = 1;
        if (flag == 1)
            printf("unfit\n");
        else
            printf("fit\n");

    }
    return 0;
}
