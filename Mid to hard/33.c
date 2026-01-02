#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
    char bin[100];
    printf("Enter binary string: ");
    scanf("%s", bin);
    double val = 0.0;
    int i, point = -1, len = strlen(bin);
    for (i = 0; i < len; i++)
    {
        if (bin[i] == '.')
        {
            point = i;
            break;
        }
        if (point == -1)
        {
            point = len;
        }
    }
    for (i = 0; i < point; i++)
    {
        if (bin[i] == '1')
        {
            val += pow(2, point - i - 1);
        }
    }
    for (i = point + 1; i < len; i++)
    {
        if (bin[i] == '1')
        {
            val += pow(2, point - i);
        }
    }
    printf("Decimal: %.2f", val);
}
