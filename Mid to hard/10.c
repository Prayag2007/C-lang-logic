#include <stdio.h>
void main()
{
    int n;
    printf("Enter size of an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array\n");
    for (int i = 0; i < n-1; i++)
    {
        printf("Enter Element%d : ", i + 1);
        scanf("%d", &a[i]);
    }
    int x, y;

    printf("Enter index for input: ");
    scanf("%d", &x);

    printf("Enter value for input: ");
    scanf("%d", &y);

    for (int i = n-1; i >= x; i--)
    {
        a[i] = a[i - 1];
    }
    a[x - 1] = y;
    n++;
    for (int i = 0; i < n; i++)
    {
        printf("Element%d is %d\n", i + 1, a[i]);
    }
}