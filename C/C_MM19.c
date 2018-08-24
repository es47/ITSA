#include <stdio.h>
int main()
{
    int i;
    double m;
    while (scanf("%d", &i) != EOF)
    {
        if (i <= 800)
            m = i * 0.9;
        else if(i > 800 && i < 1500)
            m = i * 0.9 * 0.9;
        else
            m = i * 0.9 * 0.79;
        printf("%.1f\n", m);
    }
    return 0;
}
