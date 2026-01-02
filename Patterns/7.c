#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    int num;
    for (int i = 1; i <= n; i++)
    {
        num=i;
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            if (j < i)
            {
                printf("%d ",num);
                num++;
            }
            else
            {
                printf("%d ",num);
                num--;
            }
            
        }
        printf("\n");
    }
}