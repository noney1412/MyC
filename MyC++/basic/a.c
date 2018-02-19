#include <stdio.h>

int main(void) {

  printf("------Integer------ \n");
  printf("%-18s%10d\n", "char", sizeof(char));
  printf("%-18s%10d\n", "int", sizeof(int));
  printf("%-18s%10d\n", "long", sizeof(long));
  printf("%-18s%10d\n", "long long", sizeof(long long));
  printf("%-18s%10d\n", "unsigned char", sizeof(unsigned char));

  return 0;
}