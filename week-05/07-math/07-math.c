#include <stdio.h>

int main()
{
  int n, i, sum = 0;

  scanf("%d", &n);

  if (n > 0)
  {
    for (i = 1; i <= n; i++)
    {
      if (i % 2 == 1)
      {
        sum = sum + i;
      }
    }

    printf("Summation of positive odd number: %d\n", sum);
  }

  return 0;
}
