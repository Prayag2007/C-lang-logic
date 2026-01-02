#include <stdio.h>
int fact(int n)
{
    if (n != 0)
    {
        return n *fact(n - 1);
    }
    else if (n==1 || n==0)
    {
        return 1;
    }
    
}
void main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("%d is the answer", fact(n));
}