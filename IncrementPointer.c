#include <stdio.h>

int main(void) {
  int a; // 4 bytes
  float b; // 4 bytes
  char c; // 1 byte
  double d; // 8 bytes

  int *ap;
  float *bp;
  char *cp;
  double *dp;

  ap = &a;
  bp = &b;
  cp = &c;
  dp = &d;
  printf("%p %p %p %p\n", ap, bp, cp, dp);

  ap++;
  bp++;
  cp++;
  dp++;
  printf("%p %p %p %p\n", ap, bp, cp, dp);

  // The address has been incremented by the byte size of the data type
}


