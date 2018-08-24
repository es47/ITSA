#include <stdio.h>
int main()
{
    double f, c;
    while (scanf("%lf", &c) != EOF)
    {
        f = c * 1.8 + 32;
        printf("%.1f\n", f);
    }
    return 0;
}
