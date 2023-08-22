#include <stdio.h>

void g(int, int);
void h(int *, int *);

int main(void) {
  int a = 2, b = 3;

  printf("In main, before: a=%d, b=%d\n", a, b);
  g(a, b);
  printf("In main, after passing value: a=%d, b=%d\n", a, b);
  h(&a, &b);
  printf("In main, after passing address: a=%d, b=%d\n", a, b);
  return 0;
}

void g(int a, int b) {
  printf("In g, before: a=%d, b=%d\n", a, b);
  a = 100 + a;
  b = 100 + b;
  printf("In g, after: a=%d, b=%d\n", a, b);
}

void h(int *a, int *b) {
  printf("In h, before: a=%d, b=%d\n", *a, *b);
  *a = 100 + *a;
  *b = 100 + *b;
  printf("In h, after: a=%d, b=%d\n", *a, *b);
}
