#include<stdio.h>

void main()
{
    int n;
    printf("Enter size of an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element%d : ", i + 1);
        scanf("%d", &a[i]);
    }

    int count = 0,k;
    printf("Enter number: ");
    scanf("%d",&k);

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]+a[j] == k )
            {
                count++;
            }
        }
    }
    printf("Number of pairs are %d",count); 
}