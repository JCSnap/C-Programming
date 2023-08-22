#include <stdio.h>

int main(void) {
  int *n;
  *n = 123;
  printf("%d\n", *n);

  // Segmentation fault (core dumped)
  return 0;
}
