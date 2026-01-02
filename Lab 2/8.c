#include <stdio.h>
void main()
{
    int x,y ;
    printf("Enter any two numbers: ");
    scanf("%d",&x);
    scanf("%d",&y);
    if (y<x)
    {
        int temp = x;
        x=y;
        y=temp;
    }
    printf("The numbers below are divisible by 2\n");
    for (int i = x+1; i < y; i++)
    {
        if (i%2 == 0)
        {
            printf("%d ",i);
        }
    }
}