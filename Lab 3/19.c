#include <stdio.h>
void main()
{
    int x, y, ans = 1, multi = 0;
    printf("Enter any Number: ");
    scanf("%d", &x);
    printf("Enter any power: ");
    scanf("%d", &y);
    for (int i = 0; i < y; i++)
    {
        multi = 0;
        for (int j = 0; j < x; j++)
        {
            multi = multi + ans;
        }
        ans = multi;
    }
    printf("Answer is %d", ans);
}