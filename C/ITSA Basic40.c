#include <stdio.h>
#include <string.h>

int main(void)
{
    int sum[10], i, j;
    char isbn[19];
    while(gets(isbn) != NULL)
    {
        j = 0;
        for (i = 0; i < 19; )
        {
            if (isbn[i] > '9')
                sum[j] = 10;
            else
                sum[j] = isbn[i] - '0';
            j++;
            i += 2;
        }
        j = 2;
        while(j--)
            for (i = 1; i < 10; i++)
                sum[i] = sum[i] + sum[i - 1];
        if (sum[9] % 11 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
