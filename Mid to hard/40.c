#include <stdio.h>

void main()
{
    int n;
    printf("Enter size of an arrays: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array1\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element%d : ", i + 1);
        scanf("%d", &a[i]);
    }

    int b[n];
    printf("Enter elements of array2\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element%d : ", i + 1);
        scanf("%d", &b[i]);
    }

    int i = 0, j = 0;
    int m1 = -1, m2 = -1;
    int count;

    for (count = 0; count <= n; count++)
    {
        if (i == n)
        {
            m1 = m2;
            m2 = b[0 + (count - i)];
            break;
        }

        else if (j == n)
        {
            m1 = m2;
            m2 = a[0 + (count - j)];
            break;
        }

        if (a[i] <= b[j])
        {
            m1 = m2;
            m2 = a[i];
            i++;
        }
        else
        {
            m1 = m2;
            m2 = b[j];
            j++;
        }
    }

    float median = (m1 + m2) / 2.0;

    printf("Median = %.0f", median);
}