#include <stdio.h>

int find_circle_area(int radius);

int main()
{
  int area, radius = 30;

  area = find_circle_area(radius);
  printf("Area: %d\n", area);

  return 0;
}

int find_circle_area(int radius)
{
  double PI = 3.1416;
  double area = PI * radius * radius;
  return (int)area;
}
