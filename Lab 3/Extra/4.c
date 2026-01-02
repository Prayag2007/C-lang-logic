#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    int x = n / 2;
    for (int i = 1; i <= n; i++)
    {
        if (i < x)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
        }
        else if (i >= x)
        {
            for (int j = i; j < n; j++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}