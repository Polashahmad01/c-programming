#include <stdio.h>

int main()
{
  int namta[10][10];
  int row, col;
  int even_count = 0, odd_count = 0;

  for (row = 0; row < 10; row++)
  {
    for (col = 0; col < 10; col++)
    {
      namta[row][col] = (row + 1) * (col + 1);
    }
  }

  for (row = 0; row < 10; row++)
  {
    for (col = 0; col < 10; col++)
    {
      if (namta[row][col] % 2 == 0)
      {
        even_count = even_count + 1;
      }
      else
      {
        odd_count = odd_count + 1;
      }
      printf("%d x %d = %d\n", (row + 1), (col + 1), namta[row][col]);
    }
  }

  printf("Number of EVENS: %d\n", even_count);
  printf("Number of ODDS: %d\n", odd_count);

  return 0;
}
