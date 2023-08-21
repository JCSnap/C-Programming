#include <stdio.h>

// Shows how to print out the address of a variable

int main(void) {
  int a = 123;
  printf("The address of a is %p\n", &a);
  printf("The value of a is %d\n", a);
  return 0;
}
