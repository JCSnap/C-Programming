#include <stdio.h>

int main(void) {
  int a = 123;
  int *a_ptr = &a;
  a_ptr = &a;
  printf("a_ptr = %p\n", a_ptr);
  printf("*a_ptr = %d\n", *a_ptr);
}
