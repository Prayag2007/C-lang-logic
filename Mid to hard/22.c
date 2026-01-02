#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element%d : ", i + 1);
        scanf("%d", &a[i]);
    }

    int min, temp;

    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("Array after Selection Sort: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
