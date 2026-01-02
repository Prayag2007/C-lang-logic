#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element%d : ", i + 1);
        scanf("%d", &a[i]);
    }
    int key;

    for (int i = 1; i < n; i++)
    {
        key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    printf("Array after Insertion Sort: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
