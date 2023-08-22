#include <stdio.h>

void modifyArray(char [], int);
void printArray(char [], int);

int main(void) {
  char chars[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
  modifyArray(chars, 6);
  printArray(chars, 6);
  return 0;
}

void modifyArray(char chars[], int size) {
  int i;
  for (int i = 0; i < size; i++) {
    chars[i]++;
  }
}

void printArray(char chars[], int size) {
  int i;
  for (int i = 0; i < size; i++) {
    printf("%c ", chars[i]);
  }
  printf("\n");
}
