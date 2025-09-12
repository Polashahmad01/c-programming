#include <stdio.h>

int main()
{
  int araa1[5][5] = {
      {6, 4, 7, 8, 9},
      {3, 7, 1, 9, 9},
      {8, 6, 4, 2, 7},
      {2, 4, 2, 5, 9},
      {4, 1, 6, 7, 3}};

  int row, col;
  int araa2[5][5];
  int sum = 0;

  // print current array;
  printf("Content of array (araa1): \n");

  int array2[5][5] = {
      {6, 3, 8, 2, 4},
      {4, 7, 6, 4, 1},
      {7, 1, 4, 2, 6},
      {8, 9, 2, 5, 7},
      {9, 9, 7, 9, 3}};

  for (row = 0; row < 5; row++)
  {
    for (col = 0; col < 5; col++)
    {
      printf("%d ", araa1[row][col]);
    }
    printf("\n");
  }

  for (row = 0; row < 5; row++)
  {
    for (col = 0; col < 5; col++)
    {
      araa2[col][row] = araa1[row][col];
    }
  }

  // print copied array
  printf("Content of copied array (araa2): \n");

  for (row = 0; row < 5; row++)
  {
    for (col = 0; col < 5; col++)
    {
      printf("%d ", araa2[row][col]);
    }

    printf("\n");
  }

  for (row = 0; row < 5; row++)
  {
    for (col = 0; col < 5; col++)
    {
      sum = sum + araa2[row][col];
    }

    printf("Sum of column %d: %d\n", (row + 1), sum);
    sum = 0;
  }

  return 0;
}
