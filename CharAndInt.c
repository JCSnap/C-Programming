#include <stdio.h>

// this file is used to demonstrate how ASCII can have different values depending on whether it is an int or a char
int main(void) {
  int num = 65;
  char ch = 'F';

  printf("num (in %%d) = %d\n", num);
  printf("num (in %%c) = %c\n", num);
  printf("ch (in %%d) = %d\n", ch);
  printf("ch (in %%c) = %c\n", ch);
  return 0;
}
