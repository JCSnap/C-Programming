#include <stdio.h>

void f(int);

int main(void) {
  int x[5] = {2, 3, 1, 4, 5};
  f(x[2]);
  printf("%d\n", x[2]);
}

void f(int y) {
  y *= 2;
}
