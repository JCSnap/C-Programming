#include <stdio.h>

void g(int, int);

int main(void) {
  int a = 2, b = 3;

  printf("In main, before: a=%d, b=%d\n", a, b);
  g(a, b);
  printf("In main, after: a=%d, b=%d\n", a, b);
  // This is because of the call stack
  // The variables in g are different from the variables in main
  // The variables in g are copies of the variables in main
  return 0;
}

void g(int a, int b) {
  printf("In g, before: a=%d, b=%d\n", a, b);
  a = 100 + a;
  b = 100 + b;
  printf("In g, after: a=%d, b=%d\n", a, b);
}
