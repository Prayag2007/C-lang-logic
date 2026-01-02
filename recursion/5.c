#include <stdio.h>
int power(int x,int y)
{
    if (y > 1)
    {
        return x*power(x,y-1);
    }
    else if (y==1)
    {
        return x;
    }
    else
    {
        return 1;
    }
}

void main()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d", &x);
    printf("Enter power: ");
    scanf("%d", &y);
    printf("%d is the answer", power(x,y));
}