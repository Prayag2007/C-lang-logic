#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum = sum+j ;
        }
    }
    printf("Answer is %d",sum);
}