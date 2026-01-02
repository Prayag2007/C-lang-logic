#include <stdio.h>
void main()
{
    int n1;
    printf("Enter size of an array1: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter elements of array1\n");
    for (int i = 0; i < n1; i++)
    {
        printf("Enter Element%d : ", i + 1);
        scanf("%d", &a[i]);
    }

    int n2;
    printf("Enter size of an array2: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter elements of array2\n");
    for (int i = 0; i < n2; i++)
    {
        printf("Enter Element%d : ", i + 1);
        scanf("%d", &b[i]);
    }
    int p = n1 + n2;
    int c[p];
    for (int i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        c[n1 + i] = c[i];
    }
    for (int i = 0; i < p; i++)
    {
        printf("Element%d is %d\n", i + 1, c[i]);
    }
}