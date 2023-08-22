#include <stdio.h>
#define N 10
int main(void) {
  int source[N] = {1, 2, 3, 4, 5};
  int dest[N];
  // dest = source;
  // This is illegal in C
  // An array in C is a fixed constant pointer, it points to the first element of the array, and it cannot be changed
  // This code attempts to change the pointer dest to point to the first element of the array source
  // Here is the correct way
  int i;
  for (i = 0; i < N; i++) {
    dest[i] = source[i];
  }
  // There is another way using memcpy, which requires the inclusion of string.h
  return 0;
}
