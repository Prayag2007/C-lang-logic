#include <stdio.h>

void main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element%d : ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
