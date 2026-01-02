#include <stdio.h>

void main()
{
    int n, x = 0;
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
        for (int j = i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                x++;
                break;
            }
        }
    }
    printf("Total duplicate elements are %d",x);
}
