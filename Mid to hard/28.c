#include <stdio.h>
void main()
{
  char str[100];
  printf("enter the string :");
  scanf("%s", str);
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= '0' && str[i] <= '9')
    {
      int count = str[i] - '0';
      char nextChar = str[i + 1];
      for (int j = 0; j < count; j++)
      {
        printf("%c", nextChar);
      }
      i++;
    }
    else
    {
      printf("%c", str[i]);
    }
  }
  printf("\n");
}