#include <stdio.h>
int sum(int n)
{
    if (n > 0)
    {
        return n%10 + sum(n/10);
    }
    else
    {
        return 0;
    }
}

void main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("%d is the answer", sum(n));
}