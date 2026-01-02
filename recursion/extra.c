#include <stdio.h>
#include <string.h>

int checkString(char *str1, int start, int end)
{
    if (start >= end)
    {
        return 1;
    }
    if (str1[start] != str1[end])
    {
        return 0;
    }
    checkString(str1,start+1,end-1);
}
void main()
{
    char str[100];
    printf("Enter any string: ");
    scanf("%s",&str);
    int x = checkString(str[100],0,strlen(str));
    if (x==1)
    {
        
    }
    else
    {
        /* code */
    }
    
}