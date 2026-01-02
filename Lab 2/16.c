#include<stdio.h>
void main()
{
    int n,a=0,b=1;
    printf("Enter any number: ");
    scanf("%d",&n);
    
    if (n == 1)
    {
        printf("0 ");
    }
    else if (n==2)
    {
        printf("0 1 ");
    }
    else 
    {
        printf("0 1 ");
        for (int i = 2; i < n; i++)
        {
            printf("%d ",(a+b));
            int temp=b;
            b=a+b;
            a=temp;
        }
    }
}