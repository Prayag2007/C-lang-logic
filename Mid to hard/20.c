#include <stdio.h>
void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    int x = (2 * n) - 1;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            int min = i < j ? i : j;
            if (min > x - 1 - i)
            {
                min = x - 1 - i;
            }
            if (min > x - 1 - j)
            {
                min = x - 1 - j;
            }
            printf("%d ", n - min);
        }
        printf("\n");
    }
}