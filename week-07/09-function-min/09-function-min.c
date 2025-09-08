#include <stdio.h>

int find_min(int array[], int iterator);

int main()
{
  int array[] = {23, -34, 3, 56, 87, 34};
  int n = 5;

  int min = find_min(array, n);
  printf("Min: %d\n", min);

  return 0;
}

int find_min(int arra[], int iterator)
{
  int min = arra[0];
  int i;

  for (i = 0; i <= iterator; i++)
  {
    if (arra[i] < min)
    {
      min = arra[i];
    }
  }

  return min;
}
