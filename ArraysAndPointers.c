#include <stdio.h>

int main(void) {
  int a[3];
  printf("a = %p\n", a); // This will have the same address as &a[0]
  printf("&a[0] = %p\n", &a[0]);
  printf("&a[1] = %p\n", &a[1]);
  // Since integer is 4 bytes, the address of a[1] is 4 bytes more than the address of a[0]
  return 0;
}
