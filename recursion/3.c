#include <stdio.h>
int fibo(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fibo(n - 2) + fibo(n - 1);
    }
}
void main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibo(x));
        x++;
    }
}