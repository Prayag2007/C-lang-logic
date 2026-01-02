#include <stdio.h>
int get_string_length(const char *s)
{
    int length = 0;
    while (s[length] != '\0')
    {
        length++;
    }
    return length;
}
char find_earliest_repeated_char(const char *s)
{
    int len = get_string_length(s);
    int i, j;
    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (s[i] == s[j])
            {
                return s[i];
            }
        }
    }
    return '\0';
}
void main()
{
    char s[] = "geeksforgeeks";
    char r = find_earliest_repeated_char(s);
    if (r != '\0')
    {
        printf("The earliest repeated character is: %c\n", r);
    }
    else
    {
        printf("No repeated character found.\n");
    }
    char s2[] = "abcde";
    r = find_earliest_repeated_char(s2);
    if (r != '\0')
    {
        printf("The earliest repeated character is: %c\n", r);
    }
    else
    {
        printf("No repeated character found in 'abcde'.\n");
    }
}
