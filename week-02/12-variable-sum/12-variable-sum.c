#include <stdio.h>

int main()
{
  int num1, num2, calc;

  printf("Please enter a number: ");
  scanf("%d", &num1);

  printf("Please enter another number: ");
  scanf("%d", &num2);

  calc = num1 + num2;
  printf("%d + %d = %d\n", num1, num2, calc);

  calc = num1 - num2;
  printf("%d - %d = %d\n", num1, num2, calc);

  calc = num1 * num2;
  printf("%d * %d = %d\n", num1, num2, calc);

  calc = num1 / num2;
  printf("%d / %d = %d\n", num1, num2, calc);

  return 0;
}
