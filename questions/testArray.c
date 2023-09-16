#include <stdio.h>

int main(void) {
  int a[5] = {1, 2, 3, 4, 5};
  int *curA = a;
  //print the address
  printf("The address of a is %p\n", curA);
  curA = curA + 4;
  printf("The address of a is %p\n", curA);
  return 0;
}
