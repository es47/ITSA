#include <stdio.h>
int main()
{
    int i, j, s, min, max;
    while (scanf("%d %d", &i, &j) != EOF)
    {
        min = (i > j)? j: i;
        max = (i > j)? i: j;
        s = 0;
        for ( ; min <= max; min++)
        {
            s += min;
        }
        printf("%d\n", s);
    }
    return 0;
}
