#include <stdio.h>

void main()
{
    int x,y;
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
    int b[y][x];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("Transposed matrix is:\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}
