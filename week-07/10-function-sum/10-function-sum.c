#include <stdio.h>

int find_sum(int arra[], int n);

int main()
{
  int array[] = {23, 34, 45, 39, 63, 45, 67};
  int n = 6;

  int sum = find_sum(array, n);
  printf("Sum: %d\n", sum);

  return 0;
}

int find_sum(int arra[], int n)
{

  int total = 0;
  int i;
  for (i = 0; i <= n; i++)
  {
    total = total + arra[i];
  }

  return total;
}
