#include <stdio.h>

typedef struct {
  int max;
  float ave;
} result_t;

result_t max_and_average(int, int, int);

int main(void) {
  int num1, num2, num3;
  result_t result;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  result = max_and_average(num1, num2, num3);

  printf("Max: %d\n", result.max);
  printf("Average: %.2f\n", result.ave);
  return 0;
}

result_t max_and_average(int a, int b, int c) {
  result_t result;
  result.max = a;
  if (b > result.max) {
    result.max = b;
  }
  if (c > result.max) {
    result.max = c;
  }
  result.ave = (a + b + c) / 3.0;
  return result;
}
