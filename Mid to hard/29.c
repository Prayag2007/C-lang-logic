#include <stdio.h>
int min(int a, int b)
{
    return (a < b) ? a : b;
}
int Recursive(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int minCount = n;
    int i = 1;
    while (i * i <= n)
    {
        minCount = min(minCount, 1 + Recursive(n - (i * i)));
        i++;
    }
    return minCount;
}
void main()
{
    int n = 68;
    printf("perfect square numbers %d is: %d\n", n, Recursive(n));
    n = 13;
    printf("perfect square numbers %d is: %d\n", n, Recursive(n));
}