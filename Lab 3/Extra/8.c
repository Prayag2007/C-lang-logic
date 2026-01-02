#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int x=1 ;
    char y='A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%d ",x);
                x++;
            }
            else
            {
                printf("%c ",y);
                y++;
            }
        }
        printf("\n");
    }
}