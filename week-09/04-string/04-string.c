#include <stdio.h>

int main()
{
  char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
  int i, length;

  printf("%s\n", country);

  length = 10;

  for (i = 0; i < length; i++)
  {
    if (country[i] >= 97 && country[i] <= 122)
    {
      country[i] = 'A' + (country[i] - 'a'); // =
    }
  }

  printf("%s\n", country);

  return 0;
}
// i = 10;
// length = 10;
// = B = 66 >= 97 && B = 66 <= 122
// = a = 97 >= 97 && a = 97 <= 122 => 65 => A
// = n = 110 >= 97 && n = 110 <= 122 => 78 => N
// = g = 103 >= 97 && g = 103 <= 122 => 71 => G
// = l = 108 >= 97 && l = 108 <= 122 => 76 => L
// = a = 97 >= 97 && a = 97 <= 122 => 65 => A
// = d = 100 >= 97 && d => 100 <= 122 => 68 => D
// = e = 101 >= 97 && d => 101 <= 122 => 69 => E
// = s = 115 >= 97 && s => 115 <= 122 => 83 => S
// = h = 104 >= 97 && h => 104 <= 122 => 72 => H