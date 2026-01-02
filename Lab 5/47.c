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
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of odd element in array is %d\n", odd);
    printf("Number of even element in array is %d", even);
}