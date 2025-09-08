#include <stdio.h>

int find_average(int array[], int n);

int main()
{
  int array[] = {23, 54, 64, 65, 45, 47};
  int n = 5;

  int average = find_average(array, n);
  printf("Average: %d\n", average);

  return 0;
}

int find_average(int array[], int n)
{
  int i, total = 0;

  for (i = 0; i <= n; i++)
  {
    total = total + array[i];
  }

  int avg = total / n;
  return avg;
}
