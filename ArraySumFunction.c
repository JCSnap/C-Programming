#include <stdio.h>

int sum(int [], int);

int main(void) {
  int val[5] = {1, 2, 3, 4, 5};
  printf("Sum of array elements: %d\n", sum(val, 5));
  return 0;
}

// We need to pass in the size because C doesn't know the size of the array
int sum(int arr[], int size) {
  int i, sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}
