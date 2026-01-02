#include <stdio.h>

void main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element%d : ", i + 1);
        scanf("%d", &a[i]);
    }

    int choice;
    printf("Enter how many elements you want to shift: ");
    scanf("%d", &choice);

    int temp;

    for (int i = 0; i < choice; i++)
    {
        temp = a[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = temp;
    }
    printf("After shifting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
