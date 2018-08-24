#include <stdio.h>
int main()
{
    int i, j;
    int sum, pro, dif, quo, rem;
    while (scanf("%d %d", &i, &j) != EOF)
    {
        sum = i + j;
        pro = i * j;
        dif = i - j;
        quo = i / j;
        rem = i % j;
        printf("%d+%d=%d\n", i, j, sum);
        printf("%d*%d=%d\n", i, j, pro);
        printf("%d-%d=%d\n", i, j, dif);
        printf("%d/%d=%d...%d\n", i, j, quo, rem);
    }
    return 0;
}
