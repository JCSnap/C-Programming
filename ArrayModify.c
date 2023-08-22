#include <stdio.h>

void modifyArray(float [], int);
void printArray(float [], int);

int main(void) {
  float nums[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  printArray(nums, 5);
  modifyArray(nums, 5);
  printArray(nums, 5);
  return 0;
}

void modifyArray(float nums[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    nums[i] *= 2;
  }
}

void printArray(float nums[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%.2f ", nums[i]);
  }
  printf("\n");
}
