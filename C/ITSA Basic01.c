#include <stdio.h>

int transform(int number, int ptr[][23], int position)
{
    int i;
    switch(number)
    {
    case 0:
        for (i = position; i < position + 5; i++)
        {
            *(*(ptr + 0) + i) = 1;
            *(*(ptr + 4) + i) = 1;
        }
        for (i = 0; i < 5; i++)
        {
            *(*(ptr + i) + position) = 1;
            *(*(ptr + i) + position + 4) = 1;
        }
        break;
    case 1:
        for (i = 0; i < 5; i++)
        {
            *(*(ptr + i) + position + 4) = 1;
        }
        break;
    case 2:
        for (i = position; i < position + 5; i++)
        {
            *(*(ptr + 0) + i) = 1;
            *(*(ptr + 2) + i) = 1;
            *(*(ptr + 4) + i) = 1;
        }
        *(*(ptr + 3) + position) = 1;
        *(*(ptr + 1) + position + 4) = 1;
        break;
    case 3:
        for (i = position; i < position + 5; i++)
        {
            *(*(ptr + 0) + i) = 1;
            *(*(ptr + 2) + i) = 1;
            *(*(ptr + 4) + i) = 1;
        }
        *(*(ptr + 3) + position + 4) = 1;
        *(*(ptr + 1) + position + 4) = 1;
        break;
    case 4:
        for (i = position; i < position + 5; i++)
        {
            *(*(ptr + 2) + i) = 1;
        }
        for (i = 0; i < 5; i++)
        {
            *(*(ptr + i) + position + 4) = 1;
        }
        *(*(ptr + 0) + position) = 1;
        *(*(ptr + 1) + position) = 1;
        break;
    case 5:
        for (i = position; i < position + 5; i++)
        {
            *(*(ptr + 0) + i) = 1;
            *(*(ptr + 2) + i) = 1;
            *(*(ptr + 4) + i) = 1;
        }
        *(*(ptr + 1) + position) = 1;
        *(*(ptr + 3) + position + 4) = 1;
        break;
    case 6:
        for (i = position; i < position + 5; i++)
        {
            *(*(ptr + 0) + i) = 1;
            *(*(ptr + 2) + i) = 1;
            *(*(ptr + 4) + i) = 1;
        }
        *(*(ptr + 1) + position) = 1;
        *(*(ptr + 3) + position) = 1;
        *(*(ptr + 3) + position + 4) = 1;
        break;
    case 7:
        for (i = position; i < position + 5; i++)
        {
            *(*(ptr + 0) + i) = 1;
        }
        for (i = 1; i < 5; i++)
        {
            *(*(ptr + i) + position + 4) = 1;
        }
        break;
    case 8:
        for (i = position; i < position + 5; i++)
        {
            *(*(ptr + 0) + i) = 1;
            *(*(ptr + 2) + i) = 1;
            *(*(ptr + 4) + i) = 1;
        }
        *(*(ptr + 1) + position) = 1;
        *(*(ptr + 3) + position) = 1;
        *(*(ptr + 1) + position + 4) = 1;
        *(*(ptr + 3) + position + 4) = 1;
        break;
    case 9:
        for (i = position; i < position + 5; i++)
        {
            *(*(ptr + 0) + i) = 1;
            *(*(ptr + 2) + i) = 1;
        }
        for (i = 1; i < 5; i++)
        {
            *(*(ptr + i) + position + 4) = 1;
        }
        *(*(ptr + 1) + position) = 1;
        break;
    }
    return 0;
}

int main()
{
    int input, i, j, thousand, hundred, ten, one, position;
    while(scanf("%d", &input) != EOF)
    {
        int output[5][23] = {0};
        thousand = input / 1000;
        hundred = input / 100 - thousand * 10;
        ten = input / 10 - input / 100 * 10;
        one = input % 10;
        position = 0;
        transform(thousand, output, position);
        position = 6;
        transform(hundred, output, position);
        position = 12;
        transform(ten, output, position);
        position = 18;
        transform(one, output, position);
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 23; j++)
            {
                if (output[i][j] == 1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
