#include <stdio.h>

float add(float, float);

int main(void) {
  float a = add(25.0, 15.0);
  printf("%.2f", a);

  return 0;
}

float add(float a, float b) { return a + b; }
