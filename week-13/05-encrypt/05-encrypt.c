#include <stdio.h>

int main()
{
  char ch = 'B';

  ch = (ch - 'A') + 1 + 65;

  printf("%c\n", ch);

  return 0;
}
