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

    int largest = a[0], second = -1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] != largest && (second == -1 || a[i] > second))
        {
            second = a[i];
        }
    }

    if (second == -1)
    {
        printf("-1");
    }
    else
    {
        printf("Second largest: %d", second);
    }
}
