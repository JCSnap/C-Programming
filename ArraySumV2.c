#include <stdio.h>
#define MAX 5

int main(void) {
  int numbers[MAX] = {1, 2, 3, 4, 5};
  int numbers2[] = {1, 2, 3, 4, 5}; // C can infer size
  int numbers3[10] = {1, 2, 3, 4, 5}; // If not initialized, C will set to 0
  int i, sum = 0;

  for (i = 0; i < MAX; i++) {
    sum += numbers[i];
  }

  printf("The sum is %d\n", sum);
  return 0;
}
