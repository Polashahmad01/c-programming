#include <stdio.h>

int string_length(char str[])
{
  int i = 0;

  while (str[i] != '\0')
  {
    i++;
  }

  return i;
}

int main()
{
  char your_name[] = {'P', 'o', 'l', 'a', 's', 'h', '\0'};
  printf("%s\n", your_name);

  int length = string_length(your_name);
  printf("Length: %d\n", length);

  return 0;
}
