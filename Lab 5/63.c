#include <stdio.h>

void main()
{
    int x, y;

    printf("Enter size of array1: ");
    scanf("%d", &x);
    int a[x];

    printf("Enter size of array2: ");
    scanf("%d", &y);
    int b[y];

    printf("Enter elements of array1:\n");
    for (int i = 0; i < x; i++)
    {
        printf("Enter Element%d : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter elements of array2:\n");
    for (int i = 0; i < y; i++)
    {
        printf("Enter Element%d : ", i + 1);
        scanf("%d", &b[i]);
    }
    
    printf("Intersection of arrays:\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }
}
