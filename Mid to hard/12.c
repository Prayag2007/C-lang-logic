#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    int num;
    for (int i = 1; i <= n; i++)
    {
        num = 1;
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            if (num % 2 == 0)
            {
                printf("* ");
            }
            else
            {
                printf("%d ", num);
            }
            if (j < i)
            {
                num++;
            }
            else
            {
                num--;
            }
        }
        printf("\n");
    }
}