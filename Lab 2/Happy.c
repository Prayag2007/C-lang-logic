#include <stdio.h>
void main()
{
    int n,a=0,b=0;
    printf("Enter any number: ");
    scanf("%d", &n);
    int p = n; 
    while (b<2)
    {
        while (n != 0)
        {
            int x = n % 10;
            a = a+(x*x) ;
            n = n / 10;
        }
        if (a==1)
        {
            printf("%d is a happy number",p);
            break;
        }
        else if (a==4)
        {
            b++;
        }
        n=a;
    }
    if (b==2)
    {
        printf("%d is not a happy number",p);
    }
}