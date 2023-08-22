#include <stdio.h>

void printArray(char [], int);

// This file is to show that a string is an array of chars terminated with a null character at the end
int main(void) {
  char fruit[] = "apple";
  char fruit2[] = {'a', 'p', 'p', 'l', 'e', '\0'};
  printf("%s\n", fruit);
  printArray(fruit, 6);
}

void printArray(char arr[], int size) {
  int i;
  for (int i = 0; i < size; i++) {
    printf("%c", arr[i]);
  }
  printf("\n");
}


