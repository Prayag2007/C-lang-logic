#include <stdio.h>

void main()
{
    int n, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                num = 1;
            }
            else
            {
                num = num * (i - j + 1) / j;
            }
            printf("%d ", num);
        }
        printf("\n");
    }
}
