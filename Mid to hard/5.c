#include<stdio.h>
void main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int x=0,a[100];
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            a[x]=i;
            x++;
        }
    }
    int y = 0;
    for (int i = 0; i < x; i++)
    {
        if (a[i]+1 == a[i+1])
        {
            printf("%d is pronic",n);
            break;
        }
        else
        {
            y++;
        }
    }
    if (y>0)
    {
        printf("%d is not pronic",n);
    }    
}