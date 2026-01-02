#include <stdio.h>
void main()
{
    int n, p, k;
    printf("Enter rupees: ");
    scanf("%d", &n);
    printf("Enter prize of one chocolate: ");
    scanf("%d", &p);
    printf("Enter number of wrapper for one chocolate: ");
    scanf("%d", &k);

    int m = n / p;
    int total = m, w = m;

    while (w >= k)
    {
        int x = w / k;
        total = total + x;
        w = x + (w % k);
    }
    printf("We can have %d chocolates ", total);
}