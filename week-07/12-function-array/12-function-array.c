#include <stdio.h>

void test_function(int array[]);

int main()
{
  int ara[] = {1, 2, 3, 4, 5};

  printf("%d\n", ara[0]);
  test_function(ara);
  printf("%d\n", ara[0]);

  return 0;
}

void test_function(int array[])
{
  array[0] = 100;
  return;
}
