#include<stdio.h>
void main()
{
    int n;
    printf("Enter number of stars: ");
    scanf("%d",&n);

    for (int i = 1; i <= (2*n)-1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (i<n && j==1)
            {
                printf("* ");
            }
            else if (i<n && j>1)
            {
                printf("  ");
            }
            else if (i==n || i==(2*n)-1)
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        for (int j = 1; j <= n; j++)
        {
            if (i==1)
            {
                printf("* ");
            }
            else if (i<n && j==1)
            {
                printf("* ");
            }
            else if (i<n && j>1)
            {
                printf("  ");
            }
            else if (i==n)
            {
                printf("* ");
            }
            else if (i>n && j==1)
            {
                printf("* ");
            }
            else if (i>n && j==n)
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}