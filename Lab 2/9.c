#include <stdio.h>
void main()
{
    int x ;
    printf("Enter any number: ");
    scanf("%d",&x);
    printf("The numbers below are factors of %d\n",x);
    for (int i = 1; i <= x; i++)
    {
        if (x%i == 0)
        {
            printf("%d ",i);
        }
    }
}