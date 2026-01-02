#include <stdio.h>

void main()
{
    int x, y;
    printf("For Matrix1:\n");
    printf("Enter number of rows: ");
    scanf("%d", &x);
    printf("Enter number of cols: ");
    scanf("%d", &y);
    int a[x][y];
    printf("Enter elements row by row:\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int p, q;
    printf("For Matrix2:\n");
    printf("Enter number of rows: ");
    scanf("%d", &p);
    printf("Enter number of cols: ");
    scanf("%d", &q);
    int b[p][q];
    printf("Enter elements row by row:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (y == p)
    {
        int c[x][q];
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < y; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("The multiplication matrix is:\n");
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("multiplication is not possible");
    }
}
