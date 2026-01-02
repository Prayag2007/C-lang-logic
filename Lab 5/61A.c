#include <stdio.h>

void main()
{
    int n;
    printf("Enter size of square: ");
    scanf("%d", &n);
    int sum = 0, a[n][n];

    printf("Enter elements row by row:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum +  a[i][i];
    }
    printf("Sum of diagonal elements of mattrix is %d", sum);
}
