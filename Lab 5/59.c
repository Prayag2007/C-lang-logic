#include <stdio.h>

void main()
{
    int n, x;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element%d : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Unique elements are:\n");
    for (int i = 0; i < n; i++)
    {
        x = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j] && i != j)
            {
                x++;
            }
        }
        if (x == 0)
        {
            printf("%d ", a[i]);
        }
    }
}
