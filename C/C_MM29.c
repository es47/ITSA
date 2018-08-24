#include <stdio.h>
int main()
{
    int i, j, flag, k;
    while (scanf("%d", &i) != EOF)
    {
        for (k = i - 1; k > 2; k--)
        {
            flag = 0;
            for (j = k - 1; j > 2; j--)
            {
                if (k % j == 0)
                    flag = 1;
                if (flag == 1) break;
            }
            if (flag == 0) break;
        }
        printf("%d\n", k);
    }
    return 0;
}
