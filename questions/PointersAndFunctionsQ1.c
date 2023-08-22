#include <stdio.h>

int *func(int *);

int main(void) {
  int a = 2;
  int *p;
  p = func(&a);
  (*p)--;
  printf("%d", a);
}

int *func(int *a) {
  (*a) *= 2;
  return a;
}

