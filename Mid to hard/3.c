#include <stdio.h>

int isKap(int n)
{
    int count=0;
    int x = n * n, a = x;
    while (x != 0)
    {
        count++;
        x = x / 10;
    }
    x = a;

    int k = 1, sum = 0, q = 0;
    for (int i = 0; i < count; i++)
    {
        int d = x % k;
        int e = x / k;
        if (d + e == n)
        {
            return 1;
        }
        else if (q == count)
        {
            return 0;
        }
        q++;
        k = k * 10;
        x = a;
    }
}
void main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    int x = isKap(n);

    if (x == 1)
    {
        printf("%d is a Kaprekar number", n);
    }
    else
    {
        printf("%d is not a Kaprekar number", n);
    }
}