#include <stdio.h>
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
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i]=a[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("Element%d is %d\n",i+1,b[i]);
    }
}