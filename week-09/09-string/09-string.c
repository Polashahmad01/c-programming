#include <stdio.h>

int main()
{
  char str1[] = "bangla", str2[] = "desh", str3[12];

  int i, j, length1 = 6, length2 = 4;

  // i = 6;
  // j = 6;
  // length1 = 6;
  // str3[] = {b, a, n, g, l, a, }

  for (i = 0, j = 0; i < length1; i++, j++)
  {
    str3[j] = str1[i];
  }

  // i = 4;
  // j = 4;
  // length1 = 4;
  // str3[] = {d, e, s, h, '\0' }

  for (i = 0, j = 0; i < length2; i++, j++)
  {
    str3[j] = str2[i];
  }

  str3[j] = '\0';

  printf("%s\n", str3);

  return 0;
}
