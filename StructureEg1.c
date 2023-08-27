#include <stdio.h>

typedef struct {
  int stuNum;
  float score;
  char grade;
} result_t;

int main(void) {
  result_t result1 = { 1234, 78.9, 'B' },
           result2;

  result2.stuNum = 5678;
  result2.score = 89.0;
  result2.grade = 'A';

  printf("result1: stuNum = %d, score = %.1f, grade = %c\n",
         result1.stuNum, result1.score, result1.grade);
  printf("result2: stuNum = %d, score = %.1f, grade = %c\n",
         result2.stuNum, result2.score, result2.grade);
  return 0;
}
