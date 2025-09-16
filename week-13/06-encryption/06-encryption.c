#include <stdio.h>
#include <string.h>

void encrypt(char msg[])
{
  int i, n;

  n = strlen(msg);

  for (i = 0; i < n; i++)
  {
    if (msg[i] >= 'a' && msg[i] <= 'z')
    {
      msg[i] = (msg[i] + 1);
    }
    else if (msg[i] >= 'A' && msg[i] <= 'Z')
    {
      msg[i] = (msg[i] + 1);
    }
  }
}

int main()
{
  char s[80];

  scanf("%s", s);

  encrypt(s);

  printf("%s\n", s);

  return 0;
}
