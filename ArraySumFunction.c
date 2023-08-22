#include <stdio.h>

int sum(int [], int);
// we can also write it as
// int sum(int *, int);
// because the array name is a pointer to the first element of the array

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
// We can also write it as
// int sum(int *arr, int size)
// because the array name is a pointer to the first element of the array
// This is called a syntax sugar
// It's just a different way of writing the same thing
