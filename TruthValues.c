#include <stdio.h>

int main(void) {
  int a = (2 > 3);
  int b = (2 < 3);

  printf("a = %d\n", a);
  printf("b = %d\n", b);
  // Explanation for ANSI C: 0 is false, 1 is true
  if (0) {
    printf("0 is false\n");
  } else {
    printf("0 is true\n");
  }
}
