#include <stdio.h>

void main()
{
    int n;

    printf("Enter size of array1: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter elements of array1:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element%d : ", i + 1);
        scanf("%d", &a[i]);
    }

    int choice;
    printf("Enter your choice\n1. For Left Rotation\n2. For Right Rotation\n");
    scanf("%d", &choice);

    int temp;
    if (choice == 1)
    {

        temp = a[0];
        for (int i = 0; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        a[n-1] = temp;
    }
    else if (choice == 2)
    {
        temp = a[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = temp;
    }
    else
    {
        printf("Choice input error\n");
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}
