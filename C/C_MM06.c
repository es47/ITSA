#include <stdio.h>
int main()
{
    double k, m;
    while(scanf("%lf", &k) != EOF)
    {
        m = k * 1.6;
        printf("%.1f\n", m);
    }
    return 0;
}
