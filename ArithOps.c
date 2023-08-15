#include <stdio.h>

// To illustrate some arithmetic operations
int main(void) {
  int x, p, n;

  // to show left associativity
  printf("46 / 10 / 2 = %d\n", 46 / 10 / 2);
  printf("19 %% 5 %% 3 = %d\n", 19 % 5 % 3);

  // to show truncation
  n = 9 * 0.5;
  printf("9 * 0.5 = %d\n", n);
}
