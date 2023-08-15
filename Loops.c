#include <stdio.h>

// Display different types of loops
int main(void) {
  int sum = 0, i = 1;
  while (i <= 10) {
    sum += i;
    i++;
    printf("Using while loop: %d\n", sum);
  }

  sum = 0;
  i = 1;
  do {
    sum += i;
    i++;
    printf("Using do-while loop: %d\n", sum);
  } while (i <= 10); // loop executes once more after condition is false

  for (sum = 0, i = 1; i <= 10; i++) {
    sum += i;
    printf("Using for loop: %d\n", sum);
  }
}

