#include <stdio.h>
int count(int n, int x)
{
    if (n > 0)
    {
        x++;
        count(n / 10, x);
    }
    else
    {
        return x;
    }
}

void main()
{
    int n, x = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("%d is the answer", count(n, x));
}