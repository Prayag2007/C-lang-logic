#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int num;

    for (int i = 1; i <= n; i++)
    {
        num = n - 1;
        int x = i;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", x);
            x = x + num;
            num--;
        }
        printf("\n");
    }
}


