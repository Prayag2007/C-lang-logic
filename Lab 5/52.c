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
    int smax = -2147483648;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            smax = max;
            max = a[i];
        }
        else if (a[i] > smax && a[i] != max)
        {
            smax = a[i];
        }
    }
    int smin = max;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            smin = min;
            min = a[i];
        }
        else if (a[i] > min && a[i] < smin)
        {
            smin = a[i];
        }
    }
    printf("Second Largest element in array is %d\n", smax);
    printf("Second Smallest element in array is %d", smin);
}