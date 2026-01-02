#include <stdio.h>
int checkArray(int a[], int n)
{
    int count = 1, has3 = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            count++;
        }
    }
    
    if (count >= 3)
    {
        has3 = 1;
    }

    return has3;
}
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("value returned by function is %d", checkArray(a[n], n));
}
