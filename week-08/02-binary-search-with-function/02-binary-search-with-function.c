#include <stdio.h>

int b_search(int array[], int low, int high, int key);

int main()
{
  int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
  int low_indx = 0;
  int high_indx = 25;
  int num = 97;

  b_search(ara, low_indx, high_indx, num);

  return 0;
}

int b_search(int ara[], int low, int high, int key)
{
  int low_indx = low;
  int high_indx = high;
  int mid_indx;
  int target = key;

  while (low_indx < high_indx)
  {
    mid_indx = (low_indx + high_indx) / 2;

    if (target == ara[mid_indx])
    {
      break;
    }

    if (target < ara[mid_indx])
    {
      high_indx = mid_indx - 1;
    }
    else
    {
      low_indx = mid_indx + 1;
    }
  }

  if (low_indx > high_indx)
  {
    printf("%d is not in the array\n", target);
  }
  else
  {
    printf("%d is found in the array. It is the %d th element of the array.\n", ara[mid_indx], mid_indx);
  }

  return 0;
}
