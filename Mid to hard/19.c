#include <stdio.h>
void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    int x = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("%d ", x);
                x++;
            }
        }
        else
        {
            x = x + n - 1;
            for (int j = 1; j <= n; j++)
            {
                printf("%d ", x);
                x--;
            }
            x = x + n + 1;
        }
        printf("\n");
    }
}