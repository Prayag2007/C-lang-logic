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
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            count++;
            if (count > 1)
            {
                break;
            }

            if (i == 1)
            {
                a[i - 1] = a[i];
            }
            else
            {
                a[i] = a[i - 1];
            }
        }
    }

    if (count <= 1)
    {
        printf("Elements of array:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    else
    {
        printf("Cannot convert into non-decreasing array");
    }
}
