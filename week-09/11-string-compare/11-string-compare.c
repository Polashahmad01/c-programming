#include <stdio.h>

int string_length(char str[])
{
  int i, length = 0;

  for (i = 0; str[i] != '\0'; i++)
  {
    length++;
  }

  return length;
}

int string_compare(char a[], char b[])
{
  int i, j;

  for (i = 0; a[i] != '\0' && b[i] != '\0'; i++)
  {
    if (a[i] < b[i])
    {
      return -1;
    }
    if (a[i] > b[i])
    {
      return 1;
    }
  }

  if (string_length(a) == string_length(b))
  {
    return 0;
  }
  else if (string_length(a) < string_length(b))
  {
    return -1;
  }
  else
  {
    return 1;
  }
}

int main()
{
  char str1[] = "aaa", str2[] = "aab";

  int result = string_compare(str1, str2);
  printf("%d\n", result);

  return 0;
}
