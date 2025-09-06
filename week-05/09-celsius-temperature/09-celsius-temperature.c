#include <stdio.h>

int main()
{
  double celcius, farenheit;

  printf("Enter the temperature in farenheit: ");
  scanf("%lf", &farenheit);

  celcius = farenheit - 32 * 1.8;

  printf("Temperature in celcius is: %lf\n", celcius);

  return 0;
}
