#include <stdio.h>

int main()
{
  double num1, num2, calc;

  printf("Please enter a number: ");
  scanf("%lf", &num1);

  printf("Please enter another number: ");
  scanf("%lf", &num2);

  calc = num1 + num2;
  printf("%lf + %lf = %lf\n", num1, num2, calc);

  calc = num1 - num2;
  printf("%lf - %lf = %lf\n", num1, num2, calc);

  calc = num1 * num2;
  printf("%lf * %lf = %lf\n", num1, num2, calc);

  calc = num1 / num2;
  printf("%lf / %lf = %lf\n", num1, num2, calc);

  return 0;
}
