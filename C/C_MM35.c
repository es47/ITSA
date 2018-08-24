#include <stdio.h>
int main()
{
    int i;
    while (scanf("%d", &i) != EOF)
    {
        if (i % 400 == 0 && (i % 100 != 0 || (i % 4 == 0)))
            printf("Bissextile Year\n");
        else
            printf("Common Year\n");
    }
    return 0;
}
