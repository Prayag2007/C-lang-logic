#include <stdio.h>
#include <limits.h>
#include <ctype.h>

int myAtoi(char *s)
{
    int r = 0;
    int x = 1;
    int i = 0;

    while (s[i] == ' ')
    {
        i++;
    }

    if (s[i] == '-')
    {
        x = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    while (s[i] == '0')
    {
        i++;
    }

    while (isdigit(s[i]))
    {
        r = r * 10 + (s[i] - '0');

        if (x == 1 && r > INT_MAX)
        {
            return INT_MAX;
        }
        if (x == -1 && -r < INT_MIN)
        {
            return INT_MIN;
        }

        i++;
    }

    return r * x;
}

void main()
{
    char s[100];
    printf("Enter a Number: ");
    scanf("%s",&s);
    printf("%d", myAtoi(s));
}
