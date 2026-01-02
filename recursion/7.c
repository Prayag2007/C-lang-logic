#include <stdio.h>
int rev(int n,int x)
{
    if (n == 0)
    {
        return x;
    }
    else
    {
        return rev(n/10,(x*10)+(n%10));
    }
}
void isPeli(int n)
{
    int y = rev(n,0);
    if (y == n)
    {
        printf("%d is palindrome", n);
    }
    else
    {
        printf("%d is not palindrome", n);
    }
}

void main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    isPeli(n);
}