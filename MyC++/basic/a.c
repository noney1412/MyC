#include <limits.h>
#include <stdio.h>
#define PI 3.14
#define CIRCLE_AREA(r) 2 * PI *r

int main(void) {

  float area;
  area = CIRCLE_AREA(320);
  printf("%.2f", area);

  return 0;
}