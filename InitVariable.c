# include <stdio.h>

int main(void) {
  int count;
  count = count + 1; /* compiles without warning, use gcc -Wall InitVariable.c to turn on warnings */
  printf("count = %d\n", count); /* count = 46329713 without initialization */
  return 0;
}
