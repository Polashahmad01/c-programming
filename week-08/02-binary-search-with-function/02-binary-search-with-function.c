#include <stdio.h>

int b_search(int ara[], int low, int high, int key);

int main()
{
  int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
  int low_indx = 0;
  int high_indx = 15;
  int n = 97;

  b_search(ara, low_indx, high_indx, n);

  return 0;
}

int b_search(int ara[], int low, int high, int key)
{
  int low_range = low;
  int high_range = high;
  int mid_value;
  int target = key;

  while (low_range <= high_range)
  {
    mid_value = (low_range + high_range) / 2;
    if (target == ara[mid_value])
    {
      break;
    }

    if (target < ara[mid_value])
    {
      high_range = mid_value - 1;
    }
    else
    {
      low_range = mid_value + 1;
    }
  }

  if (low_range > high_range)
  {
    printf("%d is not in the array\n", target);
  }
  else
  {
    printf("%d is found in the array. It is the %d th element of the array.\n", ara[mid_value], mid_value);
  }

  return 0;
}
