#include <stdio.h>
#include <string.h>
void main()
{
    char s1[100], s2[100];
    int count[256] = {0}, i;
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    if (strlen(s1) != strlen(s2))
    {
        printf("false");
        return 0;
    }
    for (i = 0; s1[i]; i++)
    {
        count[(unxed char)s1[i]]++;
        count[(unxed char)s2[i]]--;
    }
    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("false");
            return 0;
        }
    }
    printf("true");
}
