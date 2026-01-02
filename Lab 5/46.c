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
    int max = a[0], min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
        }
        else if (a[i] <= min)
        {
            min = a[i];
        }
    }
    printf("Largest element in array is %d\n", max);
    printf("Smallest element in array is %d", min);
}