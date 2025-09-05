#include <stdio.h>

int main()
{
  double num1, num2, value;
  char sign;

  printf("Please enter a number: ");
  scanf("%lf", &num1);

  printf("Please enter another number: ");
  scanf("%lf", &num2);

  sign = '+';
  value = num1 + num2;
  printf("%lf %c %lf = %lf\n", num1, sign, num2, value);

  sign = '-';
  value = num1 - num2;
  printf("%lf %c %lf = %lf\n", num1, sign, num2, value);

  sign = '*';
  value = num1 * num2;
  printf("%lf %c %lf = %lf\n", num1, sign, num2, value);

  sign = '/';
  value = num1 / num2;
  printf("%lf %c %lf = %lf\n", num1, sign, num2, value);

  return 0;
}
