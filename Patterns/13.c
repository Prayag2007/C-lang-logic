#include <stdio.h>

void main()
{
    int n,s;

    printf("Enter maximum number of stars: ");
    scanf("%d", &s);

    n=(2*s)-1;

    for (int i = 1; i <= s; i++)
    {
        for (int j = 1; j <= s - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ", i);
        }
        printf("\n");
    }

    for (int i = s-1; i >= 1; i--)
    {
        for (int j = 1; j <= s-i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ", i);
        }
        printf("\n");
    }
}
