#include <stdio.h>
int main()
{
    int h1, h2, m1, m2, t, m;
    while (scanf("%d %d\n%d %d", &h1, &m1, &h2, &m2) != EOF)
    {
        t = (h2 - h1) * 60 + m2 - m1;
        if (t <= 120)
        {
            t /= 30;
            m = t * 30;
        }
        if (t > 120 && t < 240)
        {
            t /= 30;
            m = 4 * 30 + (t - 4) * 40;
        }
        if (t >= 240)
        {
            t /= 30;
            m = 4 * 30 + 4 * 40 + (t - 8) * 60;
        }
        printf("%d\n", m);
    }
    return 0;
}
