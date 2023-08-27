#include <stdio.h>

int f(int *);

int main() {
  int a[] = {1, 3, 2, 5};
  int x;

  x = f(&a[1]);
  printf("%d\n", x);
}

int f(int *p) {
  return *(p-1) + *(p+1) - *(p+2);
}
