#include <stdio.h>
void main()
{
    int n,sum=0,avg;
    printf("Enter size of an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element%d : ", i + 1);
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    avg = sum/n;
    printf("Sum of every element is %d\n",sum);
    printf("Average of every element is %d",avg);
}