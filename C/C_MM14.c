#include <stdio.h>
int main()
{
    int i, d, h, m, s;
    while (scanf("%d", &i) != EOF)
    {
        d = i / 60 / 60 / 24;
        i -= d * 24 * 60 * 60;
        h = i / 60 / 60;
        i -= h * 60 * 60;
        m = i / 60;
        s = i - m * 60;
        printf("%d days\n", d);
        printf("%d hours\n", h);
        printf("%d minutes\n", m);
        printf("%d seconds\n", s);
    }
    return 0;
}
