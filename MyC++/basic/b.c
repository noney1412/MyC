
#include <stdio.h>

int main(void) {
  int a = 101;

  if (2 > 1)
    printf("True1\n");
  if (2 >= 1)
    printf("True2\n");
  if (2 != 1)
    printf("True3\n");
  if (2 == 2)
    printf("True4\n");
  if (1 < 2)
    printf("True5\n");
  if (1 <= 2)
    printf("True6\n");
  if (1 != 2)
    printf("True7\n");
  if (0 == (1 > -1))
    printf("True8\n");

  return 0;
}