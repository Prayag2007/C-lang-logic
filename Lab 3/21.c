#include <stdio.h>

void main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 != 0)
        {
            for (int x = 1; x <= 5 - i; x++)
            {
                printf(" ");
            }
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}