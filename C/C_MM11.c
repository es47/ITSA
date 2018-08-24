#include <stdio.h>
int main()
{
    int i, ten, five, one;
    while (scanf("%d", &i) != EOF)
    {
    ten = i / 10;
    five = (i % 10) / 5;
    one = i - ten * 10 - five * 5;
    printf("NT10=%d\n", ten);
    printf("NT5=%d\n", five);
    printf("NT1=%d\n", one);
    }
    return 0;
}
