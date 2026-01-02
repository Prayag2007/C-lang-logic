#include <stdio.h>

void main()
{
    int n, s;

    printf("Enter maximum number of stars: ");
    scanf("%d", &s);

    n = (2 * s) - 1;
    for (int i = s; i >= 1; i--)
    {
        for (int j = 1; j <= s - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == s)
            {
                printf("* ");
            }
            else
            {
                if (j == 1 || j == i)
                {
                    printf("* ", i);
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    for (int i = 2; i <= s; i++)
    {
        for (int j = 1; j <= s - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == s)
            {
                printf("* ");
            }
            else
            {
                if (j == 1 || j == i)
                {
                    printf("* ", i);
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}
