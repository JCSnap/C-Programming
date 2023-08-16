#include <stdio.h>

// This program demonstrates integer overflow.
// This is because the value of n is too large to be stored in a 32-bit integer.
// The max value of a 32-bit integer is 2147483647.
// After the max is reached, the value of n will be -2147483648.
int main(void) {
  int i, n = 2147483640;
  for (i=1; i<=10; i++) {
  n = n + 1;
  }
  printf("n = %d\n", n);
  return 0;
}
