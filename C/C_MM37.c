#include <stdio.h>
double main()
{
    double x, y;
    while (scanf("%lf %lf", &x, &y) != EOF)
    {
        if (x == 0)
            printf("y-axis\n");
        if (y == 0)
            printf("x-axis\n");
        if (x > 0 && y > 0)
            printf("1st Quadrant\n");
        if (x < 0 && y > 0)
            printf("2nd Quadrant\n");
        if (x < 0 && y < 0)
            printf("3rd Quadrant\n");
        if (x > 0 && y < 0)
            printf("4th Quadrant\n");
    }
    return 0;
}
