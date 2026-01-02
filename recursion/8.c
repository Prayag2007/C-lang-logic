#include <stdio.h>
int gcd(int x, int y)
{
    if (y==0)
    {
        return x;
    }
    else if (y>x)
    {
        return gcd(y,x);
    }
    else
    {
        return gcd (y,x%y);
    }
}

void main()
{
    int x,y;
    printf("Enter number1: ");
    scanf("%d", &x);
    printf("Enter number2: ");
    scanf("%d", &y);
    printf("%d is the answer", gcd(x, y));
}