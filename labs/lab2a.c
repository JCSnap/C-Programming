#include <stdio.h>

void display(int);

int main() {
  int ageArray[] = { 2, 15, 4, 23 };
  display(ageArray[0]);
  // display size of array in terms of number of elements
  printf("Size of the array is %zu\n", sizeof(ageArray) / sizeof(ageArray[0]));
  return 0;
}

void display(int age) {
  printf("%d\n", age);
}

