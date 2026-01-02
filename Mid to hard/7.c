#include<stdio.h>

void main()
{
    int h, m;
    printf("Enter a hour: ");
    scanf("%d", &h);
    printf("Enter a minutes: ");
    scanf("%d", &m);
    float x = (30 * h) + (0.5 * m);
    float y = m * 6;

    if (x > y)
    {
        printf("%.2f is the angle between hour and minute", x - y);
    }
    else
    {
        printf("%.2f is the angle between hour and minute", y - x);
    }
}