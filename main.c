#include <stdio.h>

int product(int a, int b);

int main(void)
{
  setbuf(stdout, NULL);
  int first, second, result;
  /* Get the first number*/
  printf("Enter first number : ");
  scanf("%d", &first);

  // Get the second number
  printf("Enter second number : ");
  scanf("%d", &second);

  // Calculate and display the product.
  result = product(first, second);
  printf("%d time %d = %d\n", first, second, result);

  {
    //		int first , second , result;
    //		first = 3;
    //		second = 9;
    //		result = first * second;
    printf("%d time %d = %d\n", first, second, result);
  }

  return 0;
}

int product(int a, int b)
{
  return a * b;
}