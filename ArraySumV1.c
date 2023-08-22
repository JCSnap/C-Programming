#include <stdio.h>
#define MAX 5

int main(void) {
  int numbers[MAX];
  int i, sum = 0;

  printf("Enter %d numbers: ", MAX);
  for (i = 0; i < MAX; i++) {
    scanf("%d", &numbers[i]);
  }

  for (i = 0; i < MAX; i++) {
    sum += numbers[i];
  }

  printf("The sum is %d\n", sum);
  return 0;
}
